#include <iostream>
#include <string>
using namespace std;
bool letter(char ch)
{
	return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}
int main()
{
	string s;
	while (getline(cin, s))
	{
		int i = 0, cnt[200] = { 0 };
		while (s[i])
		{
			while (s[i] && !letter(s[i]))
				i++;
			while (s[i] && letter(s[i]))
				cnt[(int)s[i++]]++;
			while (s[i] && !letter(s[i]))
				i++;
		}
		int max = 0;
		for (int i = 0; i<200; i++)
			if (cnt[i]>max)
				max = cnt[i];
		for (int i = 0; i<200; i++)
			if (cnt[i] == max)
				cout << (char)i;
		cout << " " << max << endl;
	}
}