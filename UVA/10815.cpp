#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstring>
#include<iomanip>
#include<map>
using namespace std;
int main()
{
	string str;
	vector<string>s;
	while (cin >> str)
	{
		string help;
		for (int i = 0; i < str.size(); i++)
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] += 32;
				help += str[i];
			}
			else if (str[i] >= 97 && str[i] <= 122)
				help += str[i];
			else
			{
				if (help != "")
					s.push_back(help);
				help = "";
			}
		if (help != "")
			s.push_back(help);
	}
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size() - 1; i++)
		for (int j = i + 1; j < s.size();)
			if (s[i] == s[j])
			{
				vector<string>::iterator it;
				it = s.begin() + j;
				s.erase(it);
			}
			else
				break;
	for (int i = 0; i < s.size(); i++)
		cout << s[i] << endl;
}
