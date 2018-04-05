#include<iostream>

int main()
{
	using namespace std;
	int m,n;
	int rows, cols;
	int count;
	
	cin >> m >> n;
	
	if (n > m)
	{
		n = m + n;
		m = n - m;
		n = n- m;
	}
	
	if (m%2 == 1)
	{
		count = (m / 2) * n;
		count += n/2;
	}
	else
		count = (m / 2 ) * n;
	cout << count;
	
	return 0;	 
}
