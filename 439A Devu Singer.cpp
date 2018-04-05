
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
	int n, d, temp;;
	cin >> n;
	cin >> d;
	
	int sum = 0;
	fr(i,0,n)
	{
		cin >> temp;
		sum += temp;
	}
		
	if (sum + (n-1)*10 > d)
	{
		cout << -1;
		return 0;
	}
	
	int ans;
	ans = 2*(n-1);
	d = d - (ans*5 + sum);
	ans = ans + (d/5);
	
	cout << ans;
}



