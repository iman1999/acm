#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		int j = 0;
		bool check = true, c = false;
		for (int i = 0; i < a.size()&&check==true; i++)
		{
			c = false;
			for (; j < b.size() && c == false; j++)
				if (a[i] == b[j])
					c = true;
			if (c == false)
				check = false;
		}
		if (check == true)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}