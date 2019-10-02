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
string ss[1000100];
int main()
{
	int tc;
	cin >> tc;
	cin.ignore();
	string s;
	getline(cin, s);
	while (tc--)
	{
		int n = 0;
		while (getline(cin, s)&&s!="")
			ss[n++] = s;
		sort(ss, ss + n);
		int sum = 1;
		for (int i = 0; i < n; i++)
			if (ss[i] == ss[i + 1])
				sum++;
			else
			{
				double avg = (double)sum / n; avg *= 100.0;
				cout << ss[i] << " " << setprecision(4) << fixed << avg << endl;
				sum = 1;
			}
		if (tc)
			cout << endl;
	}
}