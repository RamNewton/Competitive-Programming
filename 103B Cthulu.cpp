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

vi a[101];
vi vis(101);

void DFS(int s)
{
	vis[s] = 1;
	
	for (int i = 0; i < a[s].size(); i++)
	{
		int u = a[s][i];
		
		if (!vis[u])
		{
			DFS(u);
		}
	}
}


int main()
{
	int n, m;
	cin >> n >> m;
	
	if (n != m)
	{
		cout << "NO";
		return 0;
	}
	
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		a[u].pb(v);
		a[v].pb(u);
	}
	
	DFS(1);
	
	for (int i = 1; i < n; i++)
	{
		if (!vis[i])
		{
			cout << "NO";
			return 0;
		}
	}
	
	cout << "FHTAGN!";
}

