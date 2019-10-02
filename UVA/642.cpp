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
	string s[200], h[200], ss;
	int i = 0;
	while (cin >> ss && ss != "XXXXXX")
		s[i++] = ss;
	sort(s, s + i);
	for (int j = 0; j < i; j++)
	{
		h[j] = s[j];
		sort(h[j].begin(), h[j].end());
	}
	while(cin>>ss&&ss!= "XXXXXX")
	{
		sort(ss.begin(), ss.end());
		bool c = false;
		for(int j=0;j<i;j++)
			if (h[j] == ss)
			{
				cout << s[j] << endl;
				c = true;
			}
		if (!c)
			cout << "NOT A VALID WORD\n";
		cout << "******" << endl;


	}
}
