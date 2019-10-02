#include <iostream>
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cin >> n;
		int mile = 0, juice = 0, a;
		for (int j = 0; j<n; j++)
		{
			cin >> a;
			mile += (1 + a / 30) * 10;
			juice += (1 + a / 60) * 15;
		}
		if (mile<juice)
			cout << "Case " << i << ": Mile " << mile << endl;
		else if (juice<mile)
			cout << "Case " << i << ": Juice " << juice << endl;
		else
			cout << "Case " << i << ": Mile Juice " << mile << endl;
	}
}