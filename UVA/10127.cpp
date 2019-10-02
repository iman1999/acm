#include<iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		long long int i = 1;
		int j = 1;
		while (i%n)
		{
			i = (i * 10 + 1)%n;
			j++;
		}
		cout << j << endl;
	}
}