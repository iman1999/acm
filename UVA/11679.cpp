#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int B, N;
	bool c = true;
	while (cin >> B >> N && (B||N))
	{
		bool c = true;
		int a[21], b[21][4];
		for (int i = 0; i < B; i++)
			cin >> a[i];
		for (int i = 0; i < N; i++)
		{
			int k1, k2, k3;
			cin >> k1 >> k2 >> k3;
			a[k1 - 1] -= k3;
			a[k2 - 1] += k3;
		}
		for (int i = 0; i < B; i++)
			if (a[i] < 0)
				c = false;
		if (c)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}
}