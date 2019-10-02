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
#define ll long long int 
using namespace std;
int main()
{
	string s;
	while (getline(cin, s) && s != "Game Over")
	{
		int sc[15][2] = {}, cnt = 0, b[15] = {}, score = 0;
		bool f;
		f = false;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'X')
			{
				sc[cnt][0] = 10;
				sc[cnt][1] = 0;
				b[cnt] = 2;
				cnt++;
			}
			else if (s[i] == '/')
			{
				sc[cnt][1] = 10 - sc[cnt][0];
				b[cnt] = 1;
				cnt++;
				f = false;
			}
			else if (s[i] >= '0'&&s[i] <= '9')
			{
				if (f)
				{
					sc[cnt][1] = s[i] - 48;
					if (sc[cnt][0] + sc[cnt][1] == 10)
						b[cnt] = 1;
					cnt++;
					f = false;
				}
				else
				{
					sc[cnt][0] = s[i] - 48;
					f = true;
				}
			}
		}
		for (int i = 0; i < 10; i++)
		{
			if (b[i] == 2)
			{
				if (b[i + 1] == 2)
					sc[i][0] += sc[i + 2][0];
				else
					sc[i][0] += sc[i + 1][1];
				sc[i][0] += sc[i + 1][0];
			}
			else if (b[i] == 1)
				sc[i][0] += sc[i + 1][0];
			score += sc[i][0] + sc[i][1];
		}
		cout << score << endl;
	}
}