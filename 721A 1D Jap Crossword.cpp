
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
#define FR(i,j,k) for(ll i = j; i >= 0; i--)
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
	string a;
	cin >> a;
	vi b;
	
	char c;
	c = a[0];
	int k = 0;
	if(c == 'B')
		k = 1;
	a.erase(0,1);
	while(!a.empty())
	{
		if(a[0] == 'B')
			k++;
		else
		{
			if (k != 0)
				b.pb(k);
			k = 0;
		}
		a.erase(0,1);
	}
	
	if(k != 0)
		b.pb(k);
	
	cout << b.size() << "\n";
	for(int i = 0; i < b.size(); i++)
		cout << b[i] << " ";
}



