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
	int n, temp = 0, c = 0, maximum = -1;
	cin >> n;
	
	vi a(n+1);
	vi dp(n+1);
	
	cin >> a[1];
	
	
	if(a[1])
	{
		dp[1] = -1;
		c++;
	}
	else
	{
		dp[1] = 1;
		maximum = 1;
	}
	
	for (int i = 2; i <= n; i++)
	{
		cin >> temp;
		if (temp)
		{
			dp[i] = max(dp[i-1] - 1, - 1);
			c++;
		}
		else
			dp[i] = max(dp[i-1] + 1, 1);

		if (dp[i] > maximum)
			maximum = dp[i];
	}
	
	cout << maximum + c;
	
}

