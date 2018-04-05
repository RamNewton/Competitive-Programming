#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr(i, j) for(i = 0; i < j; i++)

using namespace std;

int main()
{
	int n, i;
	string s;
	char c;
	vector <int> arr(26, 0);
	cin >> n;
	cin >> s;
	
	if (n < 26)
		cout << "NO";
	else
	{
		fr(i, n)
		{
			c = s[i];
			
			if ( c >= 'A' && c <= 'Z')
				c = c + ('a' - 'A');
			
			arr[c-'a'] = 1;
		}
		
		sort(arr.begin(), arr.end());
		
		if(!arr[0])
			cout << "NO";
		else
			cout << "YES";
	}
	
}
