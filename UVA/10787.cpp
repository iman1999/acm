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
#include<stack>
using namespace std;
int main()
{
	int amin, amax, bmin, bmax, mmin, mmax, i, j, k, cnt, tc, n;
	cin >> tc;
	for (n = 1; n <= tc; n++)
	{

		cnt = 0;

		cin >> amin >> amax >> bmin >> bmax >> mmin >> mmax;

		for (i = mmin; i <= mmax; i++)
		{
			if (i % 2 == 0)
			{
				for (j = bmin; j <= bmax; j++)
					if (j % (i / 2) == 0)
						cnt++;
			}

			else
			{
				for (j = bmin; j <= bmax; j++)
					if (j % (i) == 0)
						cnt++;
			}


		}

		cout << "Case " << n << ": " << cnt * ((amax - amin) + 1) << endl;
	}
	return 0;
}