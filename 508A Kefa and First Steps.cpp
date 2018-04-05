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
	int n, ans = 0, i;
	cin >> n;
	
	vector<ll> a(n+1);
	vector<ll> dp(n+1);
	
	dp[0] = a[0] = 0;
	fr(i, 1, n+1)
	{
		cin >> a[i];
		if (a[i] >= a[i-1])
		{
			dp[i] = dp[i-1] + 1;
		}
		else
		{
			dp[i] = 1;
			if (ans<dp[i-1])
			{
				ans = dp[i-1];
			}
		}
		
		if (ans<dp[n])
		{
			ans= dp[n];
		}
	}
	
	cout << ans;
}

