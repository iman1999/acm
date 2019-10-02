#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstring>
#include<iomanip>
#include<map>
using namespace std;
bool visited[10000001];
void Sieve()
{
	memset(visited, true, sizeof(visited));
	for (int i = 2; i*i <= 10000000; i++)
	{
		if (visited[i])
		{
			for (int j = i * i; j <= 10000000; j += i)
			{
				visited[j] = false;
			}
		}
	}

}
int main()
{
	Sieve();
	visited[0] = visited[1] = false;
	int tc, k = 1;
	cin >> tc;
	while (tc--)
	{
		map<char, int>Map;
		string s;
		int a[26] = {};
		while (s == "")
			getline(cin, s);
		for (int i = 0; i < s.size(); i++)
			Map[s[i]]++;
			//a[s[i] - 65]++;
		cout << "Case " << k++ << ": ";
		bool check = false;

		for (map<char, int>::iterator it = Map.begin(); it != Map.end(); it++)
		{
			if (visited[it->second])
			{
				cout << it->first;
				check = true;
			}
		}
		if (!check)
			cout << "empty";
			cout << endl;
	}
}
