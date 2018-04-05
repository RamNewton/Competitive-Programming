#include<iostream>

int main()
{
	using namespace std;
	
	int n;
	int mat[n][n];
	int i, j, p_count, count, temp;
	cin >> n;
	count = 0;
	for (i = 0; i < n; i++)
	{	p_count = 0;
		for (j= 0; j < 3; j++)
		{
			cin >> temp;
			if(temp == 1)
				p_count ++; 
		}
		if (p_count >= 2)
			count ++;
	}
	cout << count;
	
	return 0;
}
