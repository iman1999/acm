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
long long int nu[100001];
string s[100001];
int check[100001][2];
int main()
{
	int tc = 1;
	int n;
	while (cin>>n&&n)
	{
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
			nu[i] = stoi(s[i]);
			check[i][0] = -1;
		}
		for (int i = 0; i < n; i++)
		{
			if (nu[i] + 1 == nu[i + 1])
			{
				if (check[k][0] == -1)
					check[k][0] = i;
				check[k][1] = i + 1;
			}
			else
			{
				if (check[k][0] == -1)
				{
					check[k][0] = i;
					check[k][1] = i;
				}
				k++;
			}
		}
		cout << "Case " << tc++ << ":" << endl;
		for (int i = 0; i < k; i++)
		{
			int u;
			cout << s[check[i][0]];
			if (check[i][0] == check[i][1])
			{
				cout << endl;
				continue;
			}
			cout << "-";
			if (s[check[i][0]].size() < s[check[i][1]].size())
				cout << s[check[i][1]] << endl;
			else
			{
				for(int j=0;j<s[check[i][0]].size();j++)
					if (s[check[i][0]][j] != s[check[i][1]][j])
					{
						u = j;
						break;
					}
				for (int j = u; j < s[check[i][0]].size(); j++)
					cout << s[check[i][1]][j];
				cout << endl;
			}
		}
		cout << endl;
	}
}
