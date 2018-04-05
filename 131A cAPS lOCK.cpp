#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr(i, j) for(i = 0; i < j; i++)

using namespace std;

int main()
{
	string s;
	int i;
	cin >> s;
	int n = s.length();
	
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		for(i = 1; i < n; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				continue;
			else
			{
				cout << s;
				return 0;
			}
		}
		
		fr(i, n)
		{
			if (i == 0)
				s[i] = s[i] - ('a' - 'A');
			else
				s[i] = s[i] + 'a' - 'A';
		}
		cout << s;
		return 0;
	}
	else
	{
		for(i = 1; i < n; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				continue;
			else
			{
				cout << s;
				return 0;
			}
		}
		
		fr(i, n)
		{
			s[i] = s[i] + 'a' - 'A';
		}
		cout << s;
		return 0;
	}
}

