#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t = 1;
	string s;
	while (cin >> s)
	{
		if (s[0] == 0)
			break;
		int n;
		cin >> n;
		cout << "Case " << t++ << ":" << endl;
		for (int k = 0; k < n; k++)
		{
			bool check = true;
			int i, j;
			cin >> i >> j;
			if (i > j)
				swap(i, j);
			for (int w = i; w < j&&check; w++)
				if (s[w] != s[w + 1])
					check = false;
			if (check)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
}