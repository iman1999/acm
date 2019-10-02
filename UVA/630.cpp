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
	while (tc--)
	{
		string s[1100], h[1100];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
			h[i] = s[i];
			sort(h[i].begin(), h[i].end());
		}
		string str, hs;
		while (cin >> str && str != "END")
		{
			cout << "Anagrams for: " << str << endl;
			int c = 1;
			hs = str;
			sort(str.begin(), str.end());
			for (int i = 0; i < n; i++)
				if (h[i] == str)
				{
					if (c < 10)
						cout << "  " << c++ << ") " << s[i] << endl;
					else if (c < 100)
						cout << " " << c++ << ") " << s[i] << endl;
					else
						cout << c++ << ") " << s[i] << endl;
				}
			if (c == 1)
				cout << "No anagrams for: " << hs << endl;
		}
		if (tc)
			cout << endl;
	}
}
