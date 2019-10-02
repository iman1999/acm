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
	ios::sync_with_stdio(false);
	int tc;
	cin >> tc;
	int t = 1;
	string s;
	while (tc--)
	{
		cout << "Case " << t++ << ": ";
		cin >> s;
		int j = 1, i = 0;
		string h;
		bool c = false;
		char ch;
		while (i < s.size())
		{
			if (s[i] >= '0'&&s[i] <= '9')
				h += s[i];
			else if(c)
			{
				int k = stoi(h);
				h = "";
				for (int j = 0; j < k; j++)
					cout << ch;
				ch = s[i];
			}
			else
			{
				ch = s[i];
				c = true;
			}
			i++;
		}
		if (h != "")
		{
			int k = stoi(h);
			h = "";
			for (int j = 0; j < k; j++)
				cout << ch;
		}
		if (tc)
			cout << endl;

	}
}