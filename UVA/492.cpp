#include<iostream>
#include<string>
#include<sstream>
using namespace std;
bool Check(char s)
{
	if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U')
		return true;
	else
		return false;
}
int main()
{
	string s, a = "ay";
	while (getline(cin, s))
	{
		string h;
		for (int i = 0; i <= s.size(); i++)
		{
			if (isalpha(s[i])&&i<s.size())
				h += s[i];
			else
			{
				if (Check(h[0]))
				{
					h += a;
				}
				else if(isalpha(h[0]))
				{
					h += h[0];
					h.replace(0, 1, "");
					h += a;
				}
				cout << h;
				h = "";
				if(i<s.size())
				cout << s[i];
			}
		}
		cout << endl;
	}
}