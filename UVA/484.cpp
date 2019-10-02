#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	map<int, int >m;
	vector<int>v;
	int n;
	while (cin >> n)
	{
		if (m.count(n) == 0)
			m[n] = 1, v.push_back(n);
		else
			m[n]++;
	}
	for (int i = 0; i < (int)v.size(); i++)
		cout << v[i] << " " << m[v[i]] << endl;
}