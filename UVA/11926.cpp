#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	bool b[1000001];
	int n, m;
	while (cin >> n >> m)
	{
		if (m == 0 && n == 0)
			break;
		bool c = true;
		memset(b, false, sizeof(b));
		for (int i = 0; i < n; i++)
		{
			int s, e;
			cin >> s >> e;
			for (int j = s; j < e&&c; j++)
			{
				c = !b[j];
				b[j] = true;
			}
		}
		for (int i = 0; i < m; i++)
		{
			int s, e, r;
			cin >> s >> e >> r;
			while (s < 1000001 && c)
			{
				for (int j = s; j < e&&c; j++)
				{
					c = !b[j];
					b[j] = true;
				}
				s += r;
				e = min(e + r, 1000001);
			}
		}
		if (c)
			cout << "NO CONFLICT\n";
		else
			cout << "CONFLICT\n";
	}
}