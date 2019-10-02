#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n, tc = 1;
	while (cin >> n && n) {
		map<int,vector<int>> g;
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			g[a].push_back(b);
			g[b].push_back(a);
		}
		int s, ttl;
		while (cin >> s >> ttl)
		{
			if (!s && !ttl)
				break;
			map<int,bool> seen;
			map<int,int> dist;
			queue<int> q;

			seen[s] = true;
			q.push(s);

			while (!q.empty()) {
				int u = q.front();
				q.pop();

				for (auto v : g[u]) {
					if (seen[v])
						continue;
					seen[v] = true;
					dist[v] = dist[u] + 1;
					q.push(v);
				}
			}
			int cnt = 0;
			for (auto u : g)
			{
				if (dist[u.first] > ttl||!seen[u.first])
					cnt++;
			}
			cout << "Case " << tc++ << ": " << cnt << " nodes not reachable from node " << s << " with TTL = " << ttl << ".\n";
		}
	}
}