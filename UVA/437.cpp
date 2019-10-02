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
struct Block
{
	int x, y, z;
	bool operator <(const Block a)
	{
		return(x < a.x) || (x == a.x&&y < a.y);
	}
};
Block b[1000];
int n,dp[1000];
int main()
{
	int t = 1;
	while (cin >> n&&n)
	{
		int x[3];
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x[0] >> x[1] >> x[2];
			sort(x, x + 3);
			b[k].x = x[0], b[k].y = x[1],b[k++].z = x[2];
			b[k].x = x[0], b[k].y = x[2], b[k++].z = x[1];
			b[k].x = x[1], b[k].y = x[2], b[k++].z = x[0];
		}
		sort(b, b + k);
		int mx = -1;
		for (int i = 0; i < k; i++)
			dp[i] = b[i].z;
		for (int i = 0; i < k; i++)
			for (int j = i+1; j < k; j++)
				if (b[i].x < b[j].x&&b[j].y > b[i].y)
					dp[j] = max(dp[j], dp[i] + b[j].z);
		for (int i = 0; i < k; i++)
			if (dp[i] > mx)
				mx = dp[i];
		cout << "Case " << t++ << ": maximum height = " << mx << endl;
	}
}
