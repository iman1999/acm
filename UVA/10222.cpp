#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string s, i = "ertyuiop[]dfghjkl;'cvbnm,.ERTYUIOPDFGHJKLCVBNM", asw = "qwertyuiopasdfghjklzxcvbnmqwertyuiasdfghjzxcvb";
	getline(cin, s);
	int q = s.size();
	for (int j = 0; j < s.size(); j++)
	{
		if (s[j] == 32)
		{
			cout << s[j];
			continue;
		}
		for (int k = 0; k < i.size(); k++)
			if (s[j] == i[k])
			{
				cout << asw[k];
				break;
			}
	}
	cout << endl;
}