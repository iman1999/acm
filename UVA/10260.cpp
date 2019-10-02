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
int check(char s)
{
	if (s == 'B' || s == 'F' || s == 'P' || s == 'V')
		return 1;
	if (s == 'C' || s == 'G' || s == 'J' || s == 'K' || s == 'Q' || s == 'S' || s == 'X' || s == 'Z')
		return 2;
	if (s == 'D'||s=='T')
		return 3;
	if (s == 'L')
		return 4;
	if (s == 'M' || s == 'N')
		return 5;
	if (s == 'R')
		return 6;
	return 0;
}
int main() 
{
	string s;
	while (cin >> s)
	{
		int n, l = -1;
		for (int i = 0; i < s.size(); i++)
		{
			int k = check(s[i]);
			if (k&&k!=l)
				cout << k;
			l = k;
		}
		cout << endl;
	}
}

