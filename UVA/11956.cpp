#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
using namespace std;
void Show(int i)
{
	int a = i / 16;
	a = a % 16;
	int b = i % 16;
	if (a < 10)
		cout << " " << a;
	else
	{
		if (a == 10)
			cout << " A";
		else if (a == 11)
			cout << " B";
		else if (a == 12)
			cout << " C";
		else if (a == 13)
			cout << " D";
		else if (a == 14)
			cout << " E";
		else if (a == 15)
			cout << " F";
	}
	if (b < 10)
		cout << b;
	else
	{
		if (b == 10)
			cout << "A";
		else if (b == 11)
			cout << "B";
		else if (b == 12)
			cout << "C";
		else if (b == 13)
			cout << "D";
		else if (b == 14)
			cout << "E";
		else if (b == 15)
			cout << "F";
	}

}
int Add(int i)
{
	if (i == 99)
		return 0;
	else
		return i + 1;
}
int Sub(int i)
{
	if (i == 0)
		return 99;
	else
		return i - 1;
}
int Add2(int i)
{
	if (i == 255)
		return 0;
	else
		return i + 1;
}
int Sub2(int i)
{
	if (i == 0)
		return 255;
	else
		return i - 1;
}
int main()
{
	int tc, k = 1;
	cin >> tc;
	while (tc--)
	{
		int a[101] = {}, i = 0;
		string s;
		while (s == "")
			getline(cin, s);
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == '>')
				i = Add(i);
			else if (s[j] == '<')
				i = Sub(i);
			else if (s[j] == '+')
				a[i] = Add2(a[i]);
			else if (s[j] == '-')
				a[i] = Sub2(a[i]);
		}
		cout << "Case " << k++ << ":";
		for (int j = 0; j < 100; j++)
			Show(a[j]);
		cout << endl;
	}
}