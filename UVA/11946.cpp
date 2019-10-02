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
	int tc;
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		string s;
		while (getline(cin, s) && s != "")
		{
			for (int i = 0; i < s.size(); i++)
				if (s[i] == '0')
					s[i] = 'O';
				else if(s[i]=='1')
					s[i] = 'I';
				else if (s[i] == '2')
					s[i] = 'Z';
				else if (s[i] == '3')
					s[i] = 'E';
				else if (s[i] == '4')
					s[i] = 'A';
				else if (s[i] == '5')
					s[i] = 'S';
				else if (s[i] == '6')
					s[i] = 'G';
				else if (s[i] == '7')
					s[i] = 'T';
				else if (s[i] == '8')
					s[i] = 'B';
				else if (s[i] == '9')
					s[i] = 'P';
			cout << s << endl;
		}
		if (tc)
			cout << endl;
	}
}