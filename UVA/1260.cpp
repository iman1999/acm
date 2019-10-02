#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[2000];
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (i > 0)
			{
				int sw = 0;
				for (int j = 0; j < i; j++)
					if (a[j] <= a[i])
						sw++;
				sum += sw;
			}
		}
		cout << sum << endl;
	}
}