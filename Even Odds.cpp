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
	ll n, k, mid;
	
	cin >> n >> k;
	
	if (n & 1)
	{
		mid = n/2 + 1;
		
		if (k > mid)
		{
			cout << 2*(k - mid);
			return 0;
		}
		else
		{
			cout << 2*(k) - 1;
			return 0;
		}
	}
	else
	{
		mid = n / 2;
		
		if (k > mid)
		{
			cout << 2*(k - mid);
			return 0;
		}
		else
		{
			cout << 2*(k) - 1;
			return 0;
		}
		
	}
	
}

