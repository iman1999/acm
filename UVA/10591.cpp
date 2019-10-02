#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, sum, a, tc, ca = 1, b;
	cin >> tc;
	while (tc--) 
	{
			cin >> n;

			a = n;
			sum = 0;

			while (n<9 || n>9)
			{
				if (n <= 9) 
				{
					sum = n;
					break;
				}
				while (n != 0) 
				{
					b = n % 10;
					sum = sum + (b*b);
					n = n / 10;
				}
				n = sum;
				sum = 0;

			}

			if (sum == 1 || sum == 7)
				cout << "Case #" << ca++ << ": " << a << " is a Happy number.\n";
			else
				cout << "Case #" << ca++ << ": " << a << " is an Unhappy number.\n";
	}

	return 0;
}