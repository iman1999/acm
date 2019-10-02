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
int memo[101][101];
ll ways(int n, int k)
{
	if (k == 1)
		return 1;
	if (memo[n][k] != -1)
		return memo[n][k];
	memo[n][k] = 0;
	for (int i = 0; i <= n; i++)
		memo[n][k] += ways(n - i, k - 1);
	memo[n][k] %= 1000000;
	return memo[n][k];
}
int main()
{
	int n, k;
	memset(memo, -1, sizeof(memo));
	while (cin >> n >> k && n || k)
	{
		cout << ways(n, k) << endl;
	}
}