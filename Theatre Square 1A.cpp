#include<iostream>

int main()
{
	using namespace std;
	long long int n, m, a, temp;
	long long int cols, rows;
	
	cin >> m;
	cin >> n;
	
	cin >> a;
	
	if (n > m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	cols = m/a;
	rows = n/a;
	
	if (m%a != 0)
		cols += 1;
	if (n%a != 0)
		rows += 1;
	
	cout << cols * rows;
}
