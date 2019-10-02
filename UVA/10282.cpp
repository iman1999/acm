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
#include<set>
#define ll long long int 
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvi vector<vi>
using namespace std;
struct Word
{
	string e, f;
	bool operator <(Word A)const
	{
		return f < A.f;
	}
};
Word d[110000];
int main()
{
	int n = 0, se[30];
	memset(se, -1, sizeof(se));
	se[0] = 0;
	bool c = false;
	string s;
	while (getline(cin, s))
	{
		if (s == "")
		{
			c = true;
			sort(d, d + n);
			for (int i = 0; i < n; i++)
				if (i == n - 1 || d[i].f[0] != d[i + 1].f[0])
					se[d[i].f[0] - 96] = i;
		}
		else if (c)
		{
			bool ch = false;
			int l;
			if(se[s[0]-96]==-1)
				cout << "eh\n";
			else
			{
				int i = s[0] - 96 - 1;
				while (se[i] == -1)
					i--;
				l = se[i];
				for (int i = l; i <= se[s[0]-96]; i++)
					if (s == d[i].f)
					{
						cout << d[i].e << endl;
						ch = true;
						break;
					}
				if (!ch)
					cout << "eh\n";
			}
		}
		else
		{
			string h;
			for (int i = 0; i < s.size(); i++)
				if (s[i] == ' ')
				{
					d[n].e = h;
					h = "";
				}
				else
					h += s[i];
			d[n++].f = h;
		}
	}
}