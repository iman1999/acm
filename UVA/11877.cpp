#include<iostream>
using namespace std;
int main()
{
	int t;
	while (cin >> t && t)
	{
		int sum = 0;
		while (t>1)
		{
			int a = t / 3;
			t %= 3;
			sum += a;
			t += a;
			if (t == 2)
			{
				sum++;
				t = 0;
			}
		}
		cout << sum << endl;
	}
}