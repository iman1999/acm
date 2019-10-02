#include<iostream>
#include<algorithm>
using namespace std;
int Bin(int n, int a[], int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] > x)
			return -1;
		else if (a[i] == x)
			return i;
	return -1;
}
int main()
{
	int m, n,a[20000],b[20000];
	int sw = 1;
	while (cin >> m >> n && m&&n)
	{
		
		for (int i = 0; i < m; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		cout << "CASE# " << sw << ":" << endl;
		sort(a, a + m);
		for (int i = 0; i < n; i++)
		{
			cout << b[i];
			int k = Bin(m , a, b[i]);
			if (k != -1)
				cout << " found at " << k + 1 << endl;
			else
				cout << " not found" << endl;
		}
		sw++;
	}
}