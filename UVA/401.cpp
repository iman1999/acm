#include<iostream>

#include<string>

using namespace std;

bool Pal(char a[])

{

	int j;
	for (j = 0; a[j]; j++);
	for (int i = 0; i < j / 2; i++)
		if (a[i] != a[j - 1 - i])
			return false;
	return true;
}
bool Mir(char a[])

{

	int j;
	for (j = 0; a[j]; j++);
	for (int i = 0; i < (j / 2)+1; i++)

		if (a[i] == 'A')

		{

			if (a[j - 1 - i] != 'A')

				return false;

		}

		else if (a[i] == 'E')

		{

			if (a[j - 1 - i] != '3')

				return false;

		}

		else if (a[i] == 'H')

		{

			if (a[j - 1 - i] != 'H')

				return false;

		}

		else if (a[i] == 'I')

		{

			if (a[j - 1 - i] != 'I')

				return false;

		}

		else if (a[i] == 'J')

		{

			if (a[j - 1 - i] != 'L')

				return false;

		}
		else if (a[i] == 'L')

		{

			if (a[j - 1 - i] != 'J')

				return false;

		}

		else if (a[i] == 'M')

		{

			if (a[j - 1 - i] != 'M')

				return false;

		}

		else if (a[i] == 'O')

		{

			if (a[j - 1 - i] != 'O')

				return false;

		}

		else if (a[i] == 'S')

		{

			if (a[j - 1 - i] != '2')

				return false;

		}

		else if (a[i] == 'U')

		{

			if (a[j - 1 - i] != 'U')

				return false;

		}

		else if (a[i] == 'T')

		{

			if (a[j - 1 - i] != 'T')

				return false;

		}

		else if (a[i] == 'V')

		{

			if (a[j - 1 - i] != 'V')

				return false;

		}

		else if (a[i] == 'W')

		{

			if (a[j - 1 - i] != 'W')

				return false;

		}

		else if (a[i] == 'X')

		{

			if (a[j - 1 - i] != 'X')

				return false;

		}

		else if (a[i] == 'Y')

		{

			if (a[j - 1 - i] != 'Y')

				return false;

		}

		else if (a[i] == 'Z')

		{

			if (a[j - 1 - i] != '5')

				return false;

		}

		else if (a[i] == '1')

		{

			if (a[j - 1 - i] != '1')

				return false;

		}

		else if (a[i] == '2')

		{

			if (a[j - 1 - i] != 'S')

				return false;

		}

		else if (a[i] == '3')

		{

			if (a[j - 1 - i] != 'E')
				return false;
		}
		else if (a[i] == '5')
		{
			if (a[j - 1 - i] != 'Z')
				return false;
		}
		else if (a[i] == '8')
		{
			if (a[j - 1 - i] != '8')
				return false;
		}
		else
			return false;
	return true;
}
int main()

{

	char a[100];

	while (cin >> a)

	{
		Mir(a) == true;
		if (Pal(a) == true &&Mir(a) == true)

			cout << a << " -- is a mirrored palindrome." << endl;

		else if (Pal(a) == true && Mir(a) == false)

			cout << a << " -- is a regular palindrome." << endl;

		else if (Pal(a) == false && Mir(a) == true)

			cout << a << " -- is a mirrored string." << endl;

		else

			cout << a << " -- is not a palindrome." << endl;
		cout << endl;

	}

}