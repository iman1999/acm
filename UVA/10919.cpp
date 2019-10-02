#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
bool Check(string s[], string t,int n)
{
	for (int i = 0; i < n; i++)
		if (t == s[i])
			return true;
	return false;
}
int main()
{
	int k;
	while (cin >> k && k)
	{
		int m;
		string s[101];
		cin >> m;
		for (int i = 0; i < k; i++)
			cin >> s[i];
		bool check = true;
		for (int i = 0; i < m; i++)
		{
			int c, r, j = 0;
			cin >> c >> r;
			string t[101];
			for (int i = 0; i < c; i++)
			{
				cin >> t[i];
				if (Check(s, t[i], k))
					j++;
			}
			if (j < r)
				check = false;
		}
		if (check)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}