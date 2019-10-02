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
long long int coins[100], dp[11000];
void Dp() 
{ 
	memset(dp, 0, 10010);
	dp[0] = 1; 
	for(int i=0; i<21; i++) 
		for(int j=coins[i]; j<=10000; j++) 
			dp[j] += dp[j-coins[i]];  
} 
int main()
{
	for (int i = 1; i <= 21; i++)
		coins[i - 1] = pow(i, 3);
	Dp();
	int n;
	while (cin >> n)
		cout << dp[n] << endl;

}
