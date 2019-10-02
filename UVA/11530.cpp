#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t, i = 1;
	cin >> t;
	while (t--)
	{
		int sum = 0;
		string a;
		if (i == 1)
			cin.ignore();
		getline(cin, a);
		for (int i = 0; i < a.size(); i++)
			if (a[i] == ' ')
				sum += 1;
			else if ((a[i] >= 'a'&&a[i] <= 'o'))
				sum += ((a[i] - 'a') % 3) + 1;
			else if((a[i] >= 't'&&a[i] <= 'v'))
				sum += a[i] - 't' + 1;
			else if((a[i] >= 'p'&&a[i] <= 's'))
				sum += a[i] - 'p' + 1;
			else if(a[i]>='w'&&a[i]<='z')
				sum += a[i] - 'w' + 1;
		cout << "Case #" << i << ": " << sum << endl;
		i++;
	}
}