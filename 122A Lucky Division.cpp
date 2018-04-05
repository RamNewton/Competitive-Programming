
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
	int a;
	int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	vi vis(1001, 0);
	
	for (int i = 0; i < 14; i++)
	{
		if(!vis[arr[i]])
		{
			for (int j = arr[i]; j<=1000; j+=arr[i])
			{
				vis[j] = 1;
			}
		}
	}
	
	cin >> a;
	
	if (vis[a])
	{
		cout << "YES";
		return 0;
	}
	
	cout << "NO";
}


