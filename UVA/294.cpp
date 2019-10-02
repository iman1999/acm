#include<iostream>
#include<math.h>
using namespace std;
int Divisors(int n)
{
	if (n == 1)
		return 1;
	int cnt = 2;
	int sq = sqrt(n);
	for (int i = 2; i <= sq; i++)
		if (n%i == 0)
			cnt += 2;
	if (sq*sq == n)
		cnt--;
	return cnt;
}
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		long long int a, b, maxc = 0, mx = 0;
		cin >> a >> b;
		for (int i = a; i <= b; i++)
		{
			int s = Divisors(i);
			if (s > maxc)
			{
				maxc = s;
				mx = i;
			}
		}
		cout << "Between " << a << " and " << b << ", " << mx << " has a maximum of " << maxc << " divisors." << endl;
	}
}