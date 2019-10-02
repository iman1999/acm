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
int a, b, c, d, l;
int f(int x)
{
	return (a*x*x) + (b*x) + c;
}
int main()
{
	ios::sync_with_stdio(false);
	while (cin>>a>>b>>c>>d>>l&&a||b||c||d||l)
	{
		int cnt = 0;
		for (int i = 0; i < l; i++)
			if (f(i) % d == 0)
				cnt++;
		cout << cnt << endl;
	}
}