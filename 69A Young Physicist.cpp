
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
	int n;
	cin >> n;
	int a[n+1][3];
	a[n][0] = 0;
	a[n][1] = 0;
	a[n][2] = 0;
	fr(i, 0, n)
	{
		cin >> a[i][0] >> a[i][1] >> a[i][2];
		a[n][0] += a[i][0];
		a[n][1] += a[i][1];
		a[n][2] += a[i][2];
	}
	
	if (!(a[n][0] || a[n][1] || a[n][2]))
	{
		cout << "YES";
	}
	else
		cout << "NO";
}



