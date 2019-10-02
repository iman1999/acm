#include<iostream>
#include<string>
using namespace std;
int main()
{
	int p, n, t = 1;
	while (cin >> n >> p)
	{
		if (!p && !n)
			break;
		string a;
		cin.ignore();
		for (int i = 0; i < n; i++)
			getline(cin, a);
		double price, pr;
		int r, rr;
		string b, c;
		for(int i=0;i<p;i++)
		{
			getline(cin, b);
			cin >> pr;
			cin >> r;
			if (i == 0)
			{
				price = pr;
				c = b;
				rr = r;
			}
			else
			{
				if (r > rr)
				{
					price = pr;
					c = b;
					rr = r;
				}
				else if (r == rr && pr < price)
				{
					price = pr;
					c = b;
					rr = r;
				}
			}
			string s;
			cin.ignore();
			for (int j = 0; j < r; j++)
				getline(cin, s);
		}
		if (t > 1)
			cout << endl;
		cout << "RFP #" << t++ << endl;
		cout << c << endl;
	}
}
