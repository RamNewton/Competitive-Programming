
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
#define FR(i,j,k) for(ll i = j; i >= k; i--)
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
	int n;
	cin >> n;
	vi a(n);
	vl dp1(n+1);
	vl dp2(n+1);
	dp1[0] = 0;
	
	fr(i,1,n)
	{
		cin >> a[i];
		dp1[i] = dp1[i-1] + a[i];
	}
	dp2[n] = 0;
	
	fr(i,1,n)
	{
		dp2[i] = dp2[i+1] + a[i];
	}
	
	if(dp1[n] % 3 != 0)
	{
		cout << 0;
		return 0;
	}
	
	ll part = dp1[n] / 3;
	ll c = 0;
	
	for(int i = 1; i < n-2; i++)
	{
		if(dp1[i] == part)
		{
			for (int j = n-1; j >= i+2; j--)
			{
				if (dp2[j] == part)
					c++;
			}
		}
	}
	
	cout << endl;
	for(int i = n; i >= 0; i--)
		cout << dp2[i] << " ";
	
	cout << c;

}



