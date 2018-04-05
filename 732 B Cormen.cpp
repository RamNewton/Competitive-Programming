
//													\[T]/ Praise
//													 (*)  The
//													 / \  Sun



#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double dbl;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<long long> vl;
typedef vector< pair<int, int> > vii;
#define mp make_pair
#define pb push_back
#define fr(i,j,k) for(ll i = j; i < k; i++)
#define FR(i,j,k) for(ll i = j; i >= 0; i--)
#define MOD 1000000007
#define all(v) v.begin(), v.end()
#define xx first
#define yy second

void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main()
{
	int n, k;
	cin >> n >> k;
	vi a(n), dp(n);
	cin >> a[0];
	dp[0] = a[0];
	fr(i,1,n)
	{
		cin >> a[i];
		dp[i] = a[i-1] + a[i];
	}
	int sum = 0;
	
	if(n == 1)
	{
		if( k > a[0])
			cout << 0 << "\n" << a[0];
		else
			cout << k - a[0] << "\n" << k;
		return 0;
	}
	fr(i,1,n)
	{
		if(dp[i] < k)
		{
			sum  += k - dp[i];
			a[i] += k - dp[i];
			if(i != n - 1)
				dp[i+1] = a[i] + a[i+1];
		}
	}
	
	cout << sum << "\n";
	fr(i,0,n)
		cout << a[i] << " ";
}



