
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
	int n , sum = 0;
	cin >> n;
	vi a(n);
	fr(i,0,n)
	{
		cin >> a[i];
		sum += a[i];
	}
	int part = 2 * sum / n;
	
//	cout << part << endl;
	vi vis(n, 0);
	
	for(int i = 0; i < n; i++)
	{
		if (vis[i])
			continue;
		for(int j = i+1; j < n; j++)
		{
			if(!vis[j])
			{
				if(a[i] + a[j] == part)
				{
//					cout << a[i] << " " << a[j];
					cout << i+1 << " " << j+1 << "\n";
					vis[i] = 1; vis[j] = 1;
					break;
				}
			}
			 
		}
		
	}
}



