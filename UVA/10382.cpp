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
using namespace std;
struct Sprink
{
	double s, e;
};
Sprink s[10010];
bool Check(Sprink a, Sprink b)
{
	if (a.s < b.s)
		return true;
	else if (a.s == b.s)
		if (a.e > b.e)
			return true;
	return false;
}
int main()
{
	int n, l;
	double w;
	while (cin >> n >> l >> w)
	{
		int x, y;
		w /= 2;
		int k = 0;
		for (int i = 0;i < n; i++)
		{
			cin >> x >> y;
			double dx = sqrt((double)y*y - (w*w));
			if (y > w)
			{
				s[k].s = (x - dx);
				s[k++].e = (x + dx);
			}
		}
		sort(s, s + k, Check);
		int  sum = 0;
		double c = 0;
		for (int i = 0; i < k; i++)
		{
			if (s[i].s > c)
				break;
			for (int j = i + 1; j < k&&s[j].s <= c; j++)
				if (s[j].e > s[i].e)
					i = j;
			sum++;
			c = s[i].e;
			if (c >= l)
				break;
		}
		if (c >= l)
			cout << sum << endl;
		else
			cout << "-1" << endl;
	}
	

}
