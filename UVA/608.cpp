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
int main()
{
	int tc;
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		string s[3];
		int u[100] = {}, d[100] = {};
		bool h = false;
		for (int k = 0; k < 3; k++)
		{
			getline(cin, s[0], ' ');
			getline(cin, s[1], ' ');
			getline(cin, s[2]);
			if (s[2][0] == 'e')
				for (int i = 0; i < s[0].size(); i++)
				{
					u[s[0][i]] = -3;
					u[s[1][i]] = -3;
					d[s[0][i]] = -3;
					d[s[1][i]] = -3;
				}
			else if (s[2][0] == 'u')
				for (int i = 0; i < s[0].size(); i++)
					u[s[1][i]] ++, d[s[0][i]]++;
			else if(s[2][0]=='d')
				for (int i = 0; i < s[0].size(); i++)
					d[s[1][i]] ++, u[s[0][i]]++;
		}
		int mx = -10,ans;
		for (int i = 65; i < 85; i++)
		{
			if (mx < u[i])
			{
				mx = u[i];
				ans = i;
				h = false;
			}
			if (mx < d[i])
			{
				mx = d[i];
				ans = i;
				h = true;
			}
		}
		if (h)
			cout << (char)ans << " is the counterfeit coin and it is heavy." << endl;
		else
			cout << (char)ans << " is the counterfeit coin and it is light.\n";
	}
}
