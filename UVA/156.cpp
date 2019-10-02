#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
void change(string &s)
{
	for (int i = 0; i < s.size(); i++)
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
}
int main()
{
	string s[1001],h[1001],w;
	int i = 0;
	cin >> w;
	while (w != "#")
	{
		s[i] = w;
		h[i++] = w;
		cin >> w;
	}
	sort(s, s + i);
	sort(h, h + i);
	for (int j = 0; j < i; j++)
		change(h[j]);
	for (int j = 0; j < i; j++)
		sort(h[j].begin(), h[j].end());
	for(int j=0;j<i-1;j++)
	{
		bool check = false;
		for (int k = j + 1; k < i; k++)
		{
			if (h[j] == h[k])
			{
				h[k] = ".";
				s[k] = ".";
				check = true;
			}
		}
		if (check)
			h[j] = s[j] = ".";
	}
	for (int j = 0; j < i; j++)
		if (s[j] != ".")
			cout << s[j] << endl;

}