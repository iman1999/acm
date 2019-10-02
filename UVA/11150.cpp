#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int n2 = n + 1;
		int sum1 = n, sum2 = n;
		while (n >= 3)
		{
			int a = n / 3;
			n = n % 3;
			sum1 += a;
			n += a;
		}
		while (n2 >= 3)
		{
			int a = n2 / 3;
			n2 = n2 % 3;
			sum2 += a;
			n2 += a;
		}
		cout << ((sum1 > sum2) ? sum1 : sum2) << endl;
	}
}