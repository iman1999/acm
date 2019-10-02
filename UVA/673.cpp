#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string str;
	int n, i;
	for (cin >> n, cin.ignore(); n; n--)
	{
		stack <char> a;
		getline(cin, str);
		for (i = 0; str[i]; i++)
		{
			if (str[i] == '(' || str[i] == '[')
				a.push(str[i]);
			else if (a.empty() || (str[i] == ')' && a.top() != '(') || (str[i] == ']' && a.top() != '['))
				break;
			else
				a.pop();
		}
		cout << (str[i] || !a.empty() ? "No\n" : "Yes\n");
	}
}