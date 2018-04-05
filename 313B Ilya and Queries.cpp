
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
#define FR(i,j,k) for(ll i = j; i <= 0; i--)
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
	fast();
	string a;
	char c;
	cin >> a;
	int n = a.size();
	vi dp(n+1);
	dp[0] = dp[1] = 0;
	
	c = a[0];
	for(int i = 1; i < n; i++)
	{
		if(c == a[i])
			dp[i] = dp[i-1] + 1;
		else
			dp[i] = dp[i-1];
		c = a[i];
	}
	
//	fr(i,0,n)
//	{
//		cout << dp[i] << " ";
//	}
	
	int q;
	cin>>q;
	
	while(q--)
	{
		int l, r;
		cin >> l >> r;
		
		cout << dp[r-1] - dp[l-1] << endl;
	}
}



