#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int t = 1;
	while (N--)
	{
		char arr[8];
		for (int i = 0; i < 8; i++)
			cin >> arr[i];
		int d = (arr[4] - 48) * 1000 + (arr[5] - 48) * 100 + (arr[6] - 48) * 10 + (arr[7] - 48);
		int b = (arr[2] - 48) * 10 + (arr[3] - 48);
		int c = (arr[0] - 48) * 10 + (arr[1] - 48);
		int a = 280;
		while (a > 0)
		{
			bool ly = false;
			if (d % 4 == 0)
				if (d % 100 != 0 || d % 400 == 0)
					ly = true;
			if (c == 1 || c == 3 || c == 5 || c == 7 || c == 8 || c == 10 || c == 12)
			{
				int k = 32 - b;
				if (a >= k)
				{
					a -= k;
					b = 1;
					if (c == 12)
					{
						c = 1;
						d++;
					}
					else
						c++;
				}
				else
				{
					b += a;
					a = 0;
				}

			}
			else if (c == 11 || c == 9 || c == 6 || c == 4)
			{
				int k = 31 - b;
				if (a >= k)
				{
					a -= k;
					b = 1;
					c++;
				}
				else
				{
					b += a;
					a = 0;
				}
			}
			else
			{
				if (ly == true)
				{
					int k = 30 - b;
					if (a >= k)
					{
						a -= k;
						b = 1;
						c++;
					}
					else
					{
						b += a;
						a = 0;
					}
				}
				else
				{
					int k = 29 - b;
					if (a >= k)
					{
						a -= k;
						b = 1;
						c++;
					}
					else
					{
						b += a;
						a = 0;
					}
				}
			}
		}

		cout << t++ << " " << setw(2) << setfill('0') << c << "/" << setw(2) << setfill('0') << b << "/" << d;
		if ((c == 1 && b >= 21) || (c == 2 && b < 20))
			cout << " aquarius" << endl;
		if ((c == 2 && b >= 20) || (c == 3 && b < 21))
			cout << " pisces" << endl;
		if ((c == 3 && b >= 21) || (c == 4 && b < 21))
			cout << " aries" << endl;
		if ((c == 4 && b >= 21) || (c == 5 && b < 22))
			cout << " taurus" << endl;
		if ((c == 5 && b >= 22) || (c == 6 && b < 22))
			cout << " gemini" << endl;
		if ((c == 6 && b >= 22) || (c == 7 && b < 23))
			cout << " cancer" << endl;
		if ((c == 7 && b >= 23) || (c == 8 && b < 22))
			cout << " leo" << endl;
		if ((c == 8 && b >= 22) || (c == 9 && b < 24))
			cout << " virgo" << endl;
		if ((c == 9 && b >= 24) || (c == 10 && b < 24))
			cout << " libra" << endl;
		if ((c == 10 && b >= 24) || (c == 11 && b < 23))
			cout << " scorpio" << endl;
		if ((c == 11 && b >= 23) || (c == 12 && b < 23))
			cout << " sagittarius" << endl;
		if ((c == 12 && b >= 23) || (c == 1 && b < 21))
			cout << " capricorn" << endl;
	}
}