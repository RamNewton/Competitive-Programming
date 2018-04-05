#include<iostream>

int main()
{	
	using namespace std;
	int n, m;
	int temp, rem;
	
	cin >> n >> m;
	
	
	if (n >= m)
	{
		if (n % 2 == 0)
			temp = n / 2;
			
		else
			temp = (n / 2) + 1;
		
		
		rem = temp % m;
		rem = m - rem;
		
		if (temp >= rem)
			temp = temp + rem;
		else
			temp = -1;
	}
	else
		temp = -1;
		
	cout << temp;
	return 0;	
}
