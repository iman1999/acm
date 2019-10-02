#include<iostream>
using namespace std;
int main()
{
	char c[50];
	while (cin >> c)
	{
		int j = 0;
		for (; c[j]; j++);
		for (int i = 0; i < j; i++)
		{
			if (c[i] == '0' || c[i] == '1' || c[i] == '-')
				cout << c[i];
			else if (c[i] >= 'A'&&c[i] <= 'C')
				cout << "2";
			else if (c[i] >= 'D'&&c[i] <= 'F')
				cout << "3";
			else if (c[i] >= 'G'&&c[i] <= 'I')
				cout << "4";
			else if (c[i] >= 'J'&&c[i] <= 'L')
				cout << "5";
			else if (c[i] >= 'M'&&c[i] <= 'O')
				cout << "6";
			else if (c[i] >= 'P'&&c[i] <= 'S')
				cout << "7";
			else if (c[i] >= 'T'&&c[i] <= 'V')
				cout << "8";
			else if (c[i] >= 'W'&&c[i] <= 'Z')
				cout << "9";
		}
		cout << endl;
	}
}