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
int a[25], b[25], mem[25][25], x[25], y[25];
int main()
{
	int n = 0;
	string s;
	bool Check = false, CheckN = false;
	while (getline(cin, s))
	{
		string h;
		if (n&&s.size() < (2 * n) - 2)
				Check = false;
		bool C = false;
		int c = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] >= '0'&&s[i] <= '9')
			{
				h += s[i];
				C = true;
			}
			else
			{
				if (CheckN&&C)
				{
					a[c++] = stoi(h);
					h = "";
					C = false;
				}
				else if (Check&&C)
				{
					b[c++] = stoi(h);
					h = "";
					C = false;
				}
				else if (C)
				{
					n = stoi(h);
					h = "";
					C = false;
					CheckN = true;
				}
			}
		}
		if (h != "")
		{
			if (CheckN&&C)
			{
				a[c++] = stoi(h);
				C = false;
			}
			else if (Check&&C)
			{
				b[c++] = stoi(h);
				C = false;
			}
			else if (C)
			{
				n = stoi(h);
				C = false;
				CheckN = true;
				continue;
			}
		}
		if (CheckN && !Check)
		{
			CheckN = false;
			Check = true;
		}
		else if (Check && !CheckN)
		{
			for (int i = 0; i <= n; i++)
				for (int j = 0; j <= n; j++)
					mem[i][j] = 0;
			for (int i = 0; i < n; i++)
			{
				int q, w;
				q = a[i];
				w = b[i];
				x[q - 1] = i;
				y[w - 1] = i;
			}
			for (int i = 1; i <= n; i++)
				for (int j = 1; j <= n; j++)
				{
					if (x[i - 1] == y[j - 1])
						mem[i][j] = mem[i - 1][j - 1]+1;
					else
						mem[i][j] = max(mem[i - 1][j], mem[i][j - 1]);
				}
			cout << mem[n][n] << endl;
		}
	}
}