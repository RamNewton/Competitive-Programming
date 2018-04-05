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
	int n, a, b, c, temp1, temp2, temp3, temp4 ,i, minima;

	cin >> n >> a >> b >> c;
	vi dp(4001, 0);	
	minima = min(a, min(b, c));
	dp[a] = 1;
	dp[b] = 1;
	dp[c] = 1;
	
	for (int i = minima+1; i <= n; i++)
	{	
		temp1 = 0;
		temp2 = 0;
		temp3 = 0;
		if ((i - a) >= minima)
		{
			temp1 = dp[i-a];
		}
		if ((i - b) >= minima)
		{
			temp2 = dp[i-b];
		}
		if ((i - c) >= minima)
		{
			temp3 = dp[i-c];
		}
		
//		cout << i << " " << temp1 << " " << temp2 << " " << temp3 << " \n ";
		
		temp4 = max(temp1, max(temp2, temp3));
		if (temp4 > 0)
			dp[i] = temp4 + 1;
		else if (i == a || i == b || i == c)
			dp[i] = 1;
	}
	
//	for (int i = 1; i <= n; i++)
//		cout << dp[i] << " ";
	
	cout << dp[n];
	
	

}

