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
bool visited[110];
int n;
int mat[110][110];
void Dfs(int j)
{
	visited[j] = true;
	for (int i = 0; i < n; i++)
		if (mat[j][i] && !visited[i])
			Dfs(i);
}
void PLine()
{
	cout << "+";
	for (int i = 0; i < n * 2 - 1; i++)
		cout << "-";
	cout << "+" << endl;
}
int main()
{
	int tc, t = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> mat[i][j];
		bool d[110][110] = { true };
		for (int i = 1; i < n; i++)
		{
			d[0][i] = true;
			memset(visited, false, sizeof(visited));
			visited[i] = true;
			Dfs(0);
			for (int j = 0; j < n; j++)
				if (!visited[j])
					d[i][j] = true;
			d[i][i] = true;
		}
		memset(visited, false, sizeof(visited));
		Dfs(0);
		cout << "Case " << t++ << ":\n";
		PLine();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				if (d[i][j] && visited[j])
					cout << "|Y";
				else
					cout << "|N";
			cout << "|\n";
			PLine();
		}
	}
}