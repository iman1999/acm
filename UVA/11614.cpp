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
	while (tc--)
	{
		long long int n, ans;
		cin >> n;
		ans = max((sqrt(1 + (8 * n)) - 1) / 2, (-1 * sqrt(1 + (8 * n)) - 1) / 2);
		cout << ans << endl;
	}
}