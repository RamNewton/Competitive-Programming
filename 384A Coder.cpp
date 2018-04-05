#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, j;
	
	cin >> n;
	
	if (!(n%2))
		cout << (n * n) / 2 << endl;
	else
		cout << (n * n) / 2 + 1 << endl;
	for( i = 0 ; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			if ((i+j) % 2)
				cout << ".";
			else
				cout << "C";
		}
		cout << "\n";
	}
}
