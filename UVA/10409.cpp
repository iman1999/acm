#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include <cstdlib> 
#include <cstdio>
#include<cmath>
#include <cstring>
#include<bitset>
#include<queue>
#include<list>
#include<sstream>
#include<functional>
#include<limits.h>
#include<bitset>
#include<stack>
#include<set>
#define ll long long int 
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvi vector<vi>
using namespace std;
string Change(string s, string d)
{
	if (s == "north")
	{
		if (d == "north")
			return "buttom";
		else if (d == "south")
			return "top";
		else if (d == "top")
			return "north";
		else if (d == "buttom")
			return "south";
		else
			return d;

	}
	else if (s == "east")
	{
		if (d == "east")
			return "buttom";
		else if (d == "west")
			return "top";
		else if (d == "top")
			return "east";
		else if (d == "buttom")
			return "west";
		else
			return d;
	}
	else if (s == "south")
	{
		if (d == "north")
			return "top";
		else if (d == "south")
			return "buttom";
		else if (d == "top")
			return "south";
		else if (d == "buttom")
			return "north";
		else
			return d;
	}
	else
	{
		if (d == "east")
			return "top";
		else if (d == "west")
			return "buttom";
		else if (d == "top")
			return "west";
		else if (d == "buttom")
			return "east";
		else
			return d;
	}
}
int main()
{
	int n;
	while (cin >> n && n)
	{
		string s, ans[4] = { "none","top","north","west" };
		for (int i = 0; i < n; i++)
		{
			cin >> s;
			for (int i = 1; i < 4; i++)
				ans[i] = Change(s, ans[i]);
		}
		int a;
		for(int i=1;i<4;i++)
			if (ans[i] == "top")
			{
				a = i;
				break;
			}
			else if (ans[i] == "buttom")
			{
				a = 7 - i;
				break;
			}
		cout << a << endl;
	}
}