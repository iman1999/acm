#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int n;
	string a[100];
	while (cin >> n&&n)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		for (int i = 0; i < n / 2; i++)
			swap(a[i], a[n - 1 - i]);
		for(int i=0;i<n-1;i++)
			for (int j = i+1; j < n; j++)
			{
				int k = a[i].size(), k1 = a[j].size();
				int min = (k > k1) ? k1 : k, max = (k > k1) ? k : k1;
				bool c = true;
				for (int q = 0; q < min; q++)
					if (a[i][q] < a[j][q])
					{
						swap(a[i], a[j]);
						c = false;
						break;
					}
					else if (a[i][q] > a[j][q])
					{
						c = false;
						break;
					}
				if (c == true)
				{
					string s, ss;
					s = a[i] + a[j];
					ss = a[j] + a[i];
					if (ss > s)
						swap(a[i], a[j]);
				}
			}
		for (int i = 0; i < n; i++)
			cout << a[i];
		cout << endl;
	}
}