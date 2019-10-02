#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b;
	string c;
	char d, e;
	int sw = 0, i = 0;
	while (cin >> a >> d >> b >> e >> c&&i<100)
	{
		i++;
		if (c != "?")
		{
			int s = stoi(c);
			if (d == '-')
			{
				if ((a - b) == s)
					sw++;
			}
			else if(d=='+')
			{
				if ((a + b) == s)
					sw++;
			}
		}
	}
	cout << sw << endl;
}