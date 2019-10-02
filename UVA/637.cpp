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
using namespace std;
void Show(int a)
{
	if (a == 0)
		cout << " Blank";
	else
		cout << " " << a;
}
int main()
{
	int n;
	while (cin >> n && n)
	{
		printf("Printing order for %d pages:\n",n);
		int P[500][4] = {}, s = (n + 3) / 4, i = 0,j;
		for (j = 0; j < s; j++)
		{
			P[j][0] = ++i;
			P[j][1] = ++i;
		}
		for (--j; i<n; j--)
		{
			P[j][2] = ++i;
			P[j][3] = ++i;
		}
		for (i = 0; i < s; i++)
		{
			for (int j = 0; j < 4; j++)
				if (P[i][j] > n)
					P[i][j] = 0;
			if (P[i][3] || P[i][0])
			{
				printf("Sheet %d, front:", i + 1);
				Show(P[i][3]);
				cout << ",";
				Show(P[i][0]);
				cout << endl;
			}
			if (P[i][1] || P[i][2])
			{
				printf("Sheet %d, back :", i + 1);
				Show(P[i][1]);
				cout << ",";
				Show(P[i][2]);
				cout << endl;
			}
		}
	}

}
