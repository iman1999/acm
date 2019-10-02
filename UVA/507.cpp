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
using namespace std;
int stops[21000];
int main()
{
	int b;
	cin >> b;
	for (int j = 0; j < b; j++)
	{
		int n;
		int s = 1, ls = 1, e = 1, sum = 0, ans = 0;
		cin >> n;
		for (int i = 0; i < n - 1; i++)
		{
			cin >> stops[i];
			sum += stops[i];
			if (sum >= ans)
			{
				if ((sum == ans && (e - ls < i + 2 - s)) || sum > ans)
				{
					ls = s;
					e = i + 2;
					ans = sum;
				}
			}
			if (sum < 0)
			{
				s = i + 2;
				sum = 0;
			}
		}
		if (s > e)
			s = ls;
		if (ans == 0)
			cout << "Route " << j + 1 << " has no nice parts" << endl;
		else
			cout << "The nicest part of route " << j + 1 << " is between stops " << s << " and " << e << endl;
	}
}