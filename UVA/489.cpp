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
using namespace std;
int main()
{
	int n;
	while (cin >> n && n > -1)
	{
		cout << "Round " << n << endl;
		string s1, s2;
		int i = 0, j = 0;
		int tr = 7;
		cin >> s1 >> s2;
		for (int i = 0; i < s2.size()&&tr&&s1!=""; i++)
		{
			if (s1.find(s2[i]) != string::npos)
				s1.erase(remove(s1.begin(), s1.end(), s2[i]), s1.end());
			else
				tr--;
		}
		if (!tr)
			cout << "You lose." << endl;
		else if (s1 == "")
			cout << "You win." << endl;
		else
			cout << "You chickened out." << endl;
	}
}
