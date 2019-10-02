#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int j = 1;
	while (t--)
	{
		int n, p, q;
		int a[50];
		cin >> n >> p >> q;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		int sw = 0, sum = 0;
		for(int i=0;i<n;i++)
		{
			if (sw == p || sum + a[sw] > q)
				break;
				sum += a[sw];
				sw++;
		}
		cout << "Case " << j << ": " << sw << endl;
		j++;
	}
}