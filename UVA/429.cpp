#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<sstream>
using namespace std;
bool check(string a, string b)
{
	if (a.size() != b.size())
		return false;
	int i = 0;
	for (int j = 0; j < a.size() && i < 2; j++)
		if (a[j] != b[j])
			i++;
	if (i == 1)
		return true;
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int sw = 0;
	while (n--) {
		if(sw)
			cout << endl;
		string s[201],s1;
		int i = 0;
		while (cin >> s1&& s1 != "*")
			s[i++] = s1;
		map<string, vector<string>> g;
		for (int j = 0; j < i; j++)
		{
			for (int k = j + 1; k < i; k++)
				if (check(s[j], s[k]))
				{
					g[s[j]].push_back(s[k]);
					g[s[k]].push_back(s[j]);
				}
		}
		string ss;
		cin.ignore();
		while (getline(cin, ss))
		{
			if (ss.size() < 3)
				break;
			stringstream s3(ss);
			string a, b;
			s3 >> a >> b;
			map<string, bool> seen;
			map<string, int> dist;
			queue<string> q;
			seen[a] = true;
			q.push(a);
			while (!q.empty())
			{
				string u = q.front();
				q.pop();
				for (auto v : g[u]) 
				{
					if (seen[v])
						continue;
					seen[v] = true;
					dist[v] = dist[u] + 1;
					q.push(v);
					if (v == b)
						break;
				}
			}			
			cout << a << " " << b << " " << dist[b] << endl;
		}
		sw++;
	}
}