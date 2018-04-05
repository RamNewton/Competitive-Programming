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


int c;

void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}


vi a[10005];
vi vis(10005, 0);
vii col(10005);

int colour(int s)
{
	vis[s] = 1;
	
	if (col[s].first != col[s].second)
	{
		c++;
		col[s].first= col[s].second;
	}
	
	for (int k : a[s])
	{
		col[k].first = col[s].first;
	}
	
	for (int k : a[s])
	{
		if(!vis[k])
			colour(k);
	}
}

int main()
{
	int n, i, temp;
	cin >> n;
	
	c = 0;
	fr(i, 1, n)
	{
		cin >> temp;
		a[i].pb(temp);
		a[temp].pb(i);
	}
	
	fr(i, 1, n+1)
	{
		cin >> temp;
		col[i] = mp(0, temp);
	}
	
	fr(i, 1, n+1)
	{
		if(!vis[i] && (col[i].first != col[i].second))
		{
			colour(i);
		}
	}
	
	colour(1);
	
	cout << c;
	
}

