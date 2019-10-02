#include <iostream>
#include <string>
#include<math.h>
using namespace std;
bool prime(int a)
{
	for (int i = 2; i <= sqrt(a); i++)
		if (a%i == 0)
			return false;
	return true;
}
int main()
{
	string s;
	while (getline(cin, s))
	{
		int i = 0, sum = 0;
		while (s[i])
		{
			if ((s[i] >= 'A' && s[i] <= 'Z'))
				sum += 26 + (s[i] - 64);
			else if ((s[i] >= 'a' && s[i] <= 'z'))
				sum += s[i] - 96;
			i++;
		}
		if (prime(sum) == true)
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl;
	}
}