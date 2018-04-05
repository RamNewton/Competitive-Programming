
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
	int n, m;
	cin >> m >> n;
	vector<string> a(n);
	vector<string> b(n);
	string temp;
	
	fr(i,0,n)
	{
		cin >> a[i] >> b[i];
	}
	
	fr(i,0,m)
	{
		cin >> temp;
		fr(j,0,n)
		{
			if(temp == a[j] || temp == b[j])
			{
				if(a[j].size() > b[j].size())
					cout<< b[j] <<" ";
				else
					cout << a[j] << " ";
			}
		}
	}
	
	return 0;
	
}



