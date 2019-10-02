#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[500], b[500];
	while (cin.getline(a, 499))
	{
		bool check = true;
		int s = 0;
		int x = strcmp("DONE", a);
		if (x == 0)break;
		for (int i = 0; a[i]; i++)
			if (a[i] >= 'a'&&a[i] <= 'z')
				b[s++] = a[i];
			else if (a[i] >= 'A'&&a[i] <= 'Z')
				b[s++] = a[i] + 32;
		for (int i = 0; i < s / 2&&check; i++)
		{
			if (b[i] != b[s - 1 - i])
				check = false;
		}
		if (check)
			cout << "You won't be eaten!" << endl;
		else
			cout << "Uh oh.." << endl;
	}
}