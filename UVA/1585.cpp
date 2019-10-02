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
int main() {
	int tc;
	cin >> tc;
	while (tc--)
	{
		int pre = 0, sum = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == 'O')
				sum += pre + 1, pre++;
			else
				pre = 0;
		}
		cout << sum << endl;
	}
}

