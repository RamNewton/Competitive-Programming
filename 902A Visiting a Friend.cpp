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
	fast();
	
	int n, m, t1, t2, i, j;
	cin >> n >> m;
	
	vi bl(100, 0);
		
	fr(i, 0, n)
	{
		cin >> t1 >> t2;
		if ( t1 == 0 )
			bl[0] = 1;
		fr(j, t1+1, t2+1)
		{
			bl[j] = 1;
		}
	}

	fr(i, 0, m+1)
	{
		if(bl[i] != 1)
		{
			cout << "NO";
			return 0;
		}
	}
	
	cout << "YES";
}
