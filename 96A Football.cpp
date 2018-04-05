#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<long long> vl;
typedef vector< pair<int, int> > vii;
#define mp make_pair
#define pb push_back
#define fr(i,j,k) for(i = j; i < k; i++)
#define FR(i,j,k) for(i = j; i <= 0; i--)
#define MOD 1000000007
#define all(v) v.begin(), v.end()

void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main()
{
	string temp;
	cin >> temp;
	
	int n = temp.size(), c = 0;
	int count;
	
	if (temp[0] == '0')
		c = -1;
	else
		c = 1;
	
	for(int i = 1; i<n; i++)
	{
		if(temp[i] == '0')
		{
			if (c > 0)
			{
				c = -1;
			}
			else
			{
				c--;
			}
		}
		else
		{
			if (c < 0)
			{
				c = 1;
			}
			else
			{
				c++;
			}
		}
		
		if (abs(c) >= 7)
		{
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
	return 0;
}

