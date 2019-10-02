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
long long int f[21] = { 1 };
int main() 
{
	ios::sync_with_stdio(false);
	for (int i = 1; i <= 20; i++)
		f[i] = i * f[i - 1];
	int tc, t = 1;;
	cin >> tc;
	while (tc--)
	{
		cout << "Data set " << t++ << ": ";
		string s;
		cin >> s;
		int n = s.size();
		long long int a=f[n];
		for (int i = 0; i<n; i++) {
			int t = 0;
			for (int j = 0; j<n; j++) {
				if (j<i && s[i] == s[j])
					break;
				if (s[i] == s[j])
					t++;
				if (j == n - 1) {
					if (t>1)
						a /= f[t];
				}
			}
		}
		cout << a << endl;
	}
}