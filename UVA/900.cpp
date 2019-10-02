#include<iostream>
using namespace std;
int fibo(int a)
{
	if (a == 0 || a == 1)
		return 1;
	return fibo(a - 1) + fibo(a - 2);
}
int main()
{
	int a;
	while (cin >> a && a != 0)
		cout << fibo(a) << endl;
}