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
#include <cstring>
#include<bitset>
#include<queue>
using namespace std;
int main()
{
	queue<int>q[1001],com,ans;
	int t, qu[100001],sq, tc = 1;
	while (cin >> t&&t)
	{
		for (int i = 0; i < t; i++)
		{
			cin >> sq;
			while (!q[i].empty())
				q[i].pop();
			while (!com.empty())
				com.pop();
			for (int j = 0; j < sq; j++)
			{
				int a;
				cin >> a;
				qu[a] = i;
			}
		}
		string s;
		while (cin >> s)
		{
			if (s[0] == 'E')
			{
				int a;
				cin >> a;
				if (q[qu[a]].empty())
					com.push(qu[a]);
				q[qu[a]].push(a);
			}
			else if (s[0] == 'D')
			{
				ans.push(q[com.front()].front());
				q[com.front()].pop();
				if (q[com.front()].empty())
					com.pop();
			}
			else
				break;
		}
		cout << "Scenario #" << tc++ << endl;
		while (!ans.empty())
		{
			cout << ans.front() << endl;
			ans.pop();
		}
		cout << endl;
	}
}