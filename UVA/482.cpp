#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
void Ch1(string s, vector<int>&i)
{
	string t;
	for (int j = 0; j < s.size(); j++)
	{
		if (s[j] == ' ')
		{
			i.push_back(stoi(t));
			t = "";
		}
		t += s[j];
	}
	if (t != "")
		i.push_back(stoi(t));

}
void Ch2(string s, vector<string> &i)
{
	string t;
	for (int j = 0; j < s.size(); j++)
	{
		if (s[j] == ' ')
		{
			i.push_back(t);
			t = "";
		}
		else
			t += s[j];
	}
	i.push_back(t);
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		vector<int>i;
		vector<string>v;
		string s1, s2;
		while (s1 == "")
			getline(cin, s1);
		getline(cin, s2);
		Ch1(s1, i);
		Ch2(s2, v);
		for(int j=0;j<i.size()-1;j++)
			for(int k=j+1;k<i.size();k++)
				if (i[j] > i[k])
				{
					swap(i[j], i[k]);
					swap(v[j], v[k]);
				}
		for (int j = 0; j < i.size(); j++)
			cout << v[j] << endl;
		if (tc)
			cout << endl;
	}
}