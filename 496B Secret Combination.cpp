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
	int n, maxi, ind, i;
	char c;
	string b, a, res;
	
	cin >> n;
	cin >> b;
	
	vi dp(n);
	a = b + b;
	
	
	dp[0] = 1;
	c = a[0];
	maxi = 1;
	ind = 0;
	
	
	fr(i, 1, 2*n)
	{
		if (c == a[i])
			dp[i] = dp[i-1] + 1;
		else
		{
			dp[i] = 1;
			c = a[i];
		}
		
		if (dp[i] > maxi)
		{
			maxi = dp[i];
			ind = i - maxi + 1;
		}
	}
	
	cout << ind << " \n";
	if (ind + maxi - 1 >= n)
	{	
		return 0;
	}
	if (ind < n)
	{
		res = a.substr(ind, n-ind);
		res = res + a.substr(0,ind);
	}
	
	cout << res;
}

