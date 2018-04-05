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
	int n, i, temp, maximum = 0;

	
	cin >> n;
	vl a(100005, 0);
	vl dp(100005, 0);
	
	fr(i, 1, n+1)
	{
		cin >> temp;
		if (temp > maximum)
			maximum = temp;
		a[temp]++;
	}
	
	dp[0] = 0;
	dp[1] = a[1];
	
	fr(i, 2, 100005)
	{
		if (dp[i-1] > dp[i-2] + i*a[i])
			dp[i] = dp[i-1];
		else
			dp[i] = dp[i-2] + i*a[i];
	}
	
	cout << dp[maximum];
}

