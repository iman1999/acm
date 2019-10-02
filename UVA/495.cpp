#include<iostream>
using namespace std;
int main()
{
	double fib[5002] = { 0,1 };
	for (int i = 2; i < 5001; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	int n;
	while (cin >> n)
		printf("The Fibonacci number for %d is %f", n, fib[n]);
}