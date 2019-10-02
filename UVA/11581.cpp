#include<iostream>
using namespace std;
bool IsZ(int m[][3])
{
	for (int i = 0; i < 3; i++) 
		for (int j = 0; j < 3; j++)
			if (m[i][j] > 0)
				return false;
	return true;
}
void Ch(int m[][3])
{
	int n[3][3];
	n[0][0] = (m[0][1] + m[1][0]) % 2;
	n[0][1] = (m[0][0] + m[1][1] + m[0][2]) % 2;
	n[0][2] = (m[0][1] + m[1][2]) % 2;

	n[1][0] = (m[0][0] + m[1][1] + m[2][0]) % 2;
	n[1][1] = (m[0][1] + m[1][0] + m[1][2] + m[2][1]) % 2;
	n[1][2] = (m[1][1] + m[0][2] + m[2][2]) % 2;

	n[2][0] = (m[2][1] + m[1][0]) % 2;
	n[2][1] = (m[2][0] + m[1][1] + m[2][2]) % 2;
	n[2][2] = (m[2][1] + m[1][2]) % 2;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			m[i][j] = n[i][j];
}
int main()
{
	int n;
	cin >> n;
	while (n)
	{
		char c[3][3];
		for (int i = 0; i < 3; i++)
			cin >> c[i];
		int m[3][3], sw = -1;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				m[i][j] = c[i][j] - 48;
		while (IsZ(m) == false)
		{
			Ch(m);
			sw++;
		}
		cout << sw << endl;
		n--;
	}
	return 0;
}