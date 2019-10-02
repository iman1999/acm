#include<iostream>
using namespace std;

int main()
{
	long long A, l;
	int t = 1;
	while (cin >> A >> l)
	{
		long long a = A;
		if (A < 0 && l < 0)
			break;
		int i = 0;
		bool c = true;
		while (A <= l)
		{
			if (A == 1)
			{
				i++;
				break;
			}
			else if (A % 2 == 0)
				A /= 2;
			else
				A = 3 * A + 1;
			i++;
		}
		cout << "Case " << t++ << ": A = " << a << ", limit = " << l << ", number of terms = " << i << endl;;
	}
}