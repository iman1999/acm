#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include <cstdlib> 
#include <cstdio>
#include<cmath>
#include <cstring>
#include<bitset>
#include<queue>
#include<list>
#include<sstream>
#include<functional>
#include<limits.h>
#include<bitset>
using namespace std;
struct point
{
	int a, b, c;
	bool operator < (point x)const
	{
		return a < x.a;
	}
	bool operator ==(point x)const
	{
		return  a == x.a&&b == x.b&&c == x.c;
	}
	bool operator !=(point x)const
	{
		if (a == x.a&&b == x.b&&c == x.c)
			return false;
		return true;
	}
};
double hyp(double dx, double dy, double dz)
{
	return sqrt((dx*dx) + (dy*dy) + (dz*dz));
}
double dis(point a, point b)
{
	return hyp((double)a.a - b.a, (double)a.b - b.b, (double)a.c - b.c);
}
point p[10000];
int main()
{
	int x, y, z, n = 0;
	while (cin>>x>>y>>z&&x||y||z)
		p[n].a = x, p[n].b = y, p[n].c = z, n++;
	sort(p, p + n);
	int dist[10] = {};
	for (int i = 0; i < n; i++)
	{
		int b = 10;
		for (int j = i + 1; j < n; j++)
		{
			if (abs(p[j].a - p[i].a > b))
				break;
			double d = dis(p[i], p[j]);
			if (d < b)
				b = d;
		}
		for (int j = i - 1; j >= 0; j--)
		{
			if (abs(p[j].a - p[i].a > b))
				break;
			double d = dis(p[i], p[j]);
			if (d < b)
				b = d;
		}
		if (b < 10)
			dist[b]++;
	}
	for (int i = 0; i < 10; i++)
		cout << setw(4) << dist[i];
	cout << endl;
}