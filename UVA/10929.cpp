#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	while (cin >> a && a != "0")
	{
		long long int sum = 0;
		for (int i = 0; i < a.size(); i++)
			if (i % 2 == 0)
				sum += (a[i] - 48);
			else
				sum -= (a[i] - 48);
		if (sum % 11 == 0)
			cout << a << " is a multiple of 11." << endl;
		else
			cout << a << " is not a multiple of 11." << endl;
	}
}