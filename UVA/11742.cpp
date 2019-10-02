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
struct seat
{
	int a, b, c;
};
int main()
{
	int n, m;
	seat s[21];
	int a[8];
	while (cin>>n>>m&&(n||m))
	{
		int sum = 0;
		bool ch[21];
		for (int i = 0; i < m; i++)
			cin >> s[i].a >> s[i].b >> s[i].c;
		for (int i = 0; i < n; i++)
			a[i] = i;
		do
		{
			memset(ch, false, 20);
			bool check = true;
			int b, c;
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
					if (s[i].a == a[j])
						b = j;
					else if (s[i].b == a[j])
						c = j;
				if (s[i].c < 0)
				{
					if ((abs(b - c)) >= abs(s[i].c))
						ch[i] = true;
				}
				else
					if (abs(b - c) <= s[i].c)
						ch[i] = true;
			}
			for (int i = 0; i < m; i++)
				if (!ch[i])
					check = false;
			if (check)
				sum++;
		} while (next_permutation(a, a + n));
		cout << sum << endl;
	}

}
