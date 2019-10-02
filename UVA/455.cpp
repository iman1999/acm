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
int main()
{
	int tc;
	cin >> tc;
	string s;
	while (tc--)
	{
		cin >> s;
		int i = 1, n = s.size();
		bool c = false;
		while (i <= n / 2)
		{
			if (n%i == 0)
			{
				c = true;
				for (int j = 0; j < n - i&&c; j += i)
				{
					for (int k = j; k < i + j && c; k++)
						if (s[k] != s[k + i])
							c = false;
				}
			}
			if (!c)
				i++;
			else
				break;
		}
		if (c)
			cout << i << endl;
		else
			cout << n << endl;
		if (tc)
			cout << endl;
	}
}