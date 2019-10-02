#include<iostream>
#include<algorithm>
using namespace std;
int minn = -1, m[50], nm, N, n, a[50];
bool c = false;
void BT(int t[], int i, int sum, int na)
{
	if (sum == N)
	{
		c = true;
		for (int j = 0; j < na; j++)
			cout << a[j] << " ";
		cout << "sum:" << sum << endl;
		return;
	}
	if (sum > N || i>n || c)
		return;
	if (sum < N)
	{
		if (minn < sum)
		{
			minn = sum;
			for (int k = 0; k < na; k++)
				m[k] = a[k];
			nm = na;
		}
		a[na] = t[i];
		BT(t, i + 1, sum + t[i], na + 1);
		BT(t, i + 1, sum, na);
	}
}
int main()
{
	while (cin >> N)
	{
		c = false;
		minn = -1;
		int na = 0;
		int t[50] = {0};
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> t[i];
		BT(t, 0, 0, na);
		if (!c)
		{
			for (int j = 0; j < nm; j++)
				cout << m[j] << " ";
			cout << "sum:" << minn << endl;
		}
	}
}