#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if (b)
		return gcd(b, a%b);
	return a;
}
int main()
{
	int n;
	while (cin >> n && n)
	{
		long long G = 0;
		for (int i = 1; i < n; i++)
			for (int j = i + 1; j <= n; j++)
				G += gcd(i, j);
		cout << G << endl;
	}
}