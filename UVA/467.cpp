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
	int X[143], n,t=1;
	vector<int>x;
	string s;
	while (getline(cin,s)) 
	{
		string h;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				x.push_back(stoi(h));
				h = "";
			}
			else
				h += s[i];
		}
		if (h != "")
		{
			x.push_back(stoi(h));
			h = "";
		}
		n = x.size();
		int Y[4000] = {};
		for (int i = 0; i<n; ++i) {
			int p = x[i] * 2;
			for (int j = 0; j <= 3600; j += p)
				++Y[j], --Y[j + x[i] - 5];
		}

		int s = 0, c = 0;
		bool check = false;
		for (int i = 0; i <= 3600 && !check; ++i)
			if (Y[i])
			{
				s += Y[i];
				if (s == n && ++c == 2)
				{
					if((i/60)%60||i%60)
					printf("Set %d synchs again at %d minute(s) and %d second(s) after all turning green.\n", t++, (i / 60) % 60, i % 60);
					else
						printf("Set %d synchs again at 60 minute(s) and 0 second(s) after all turning green.\n", t++);
					check = true;
				}
			}
		if (!check)
			printf("Set %d is unable to synch after one hour.\n", t++);
		while (!x.empty())
			x.pop_back();
	}
}