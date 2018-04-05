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
#define fr(i,j,k) for(i = j; i < k; i++)
#define FR(i,j,k) for(i = j; i <= 0; i--)
#define MOD 1000000007
#define all(v) v.begin(), v.end()
#define big 1000000000001

void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

	
vector<int> pr(10000001);

int main()
{

	pr[1] = 1; pr[0] = 1;
	ll i, j;
	
	ll rt1 = sqrt(big);
	ll rt2 = sqrt(sqrt(big));

//	cout << pr[10000] << " " << pr[1000];
	for (i = 2; i <= rt2; i++)
	{
		if (!pr[i])
		{
			for (j = i*i; j <= rt1; j+=i)
			{
				pr[j] = 1;
			}
		}
		
	}
	
	int t;
	cin >> t;
	
	for (i = 0; i < t; i++)
	{
		ll n;
		cin >> n;
		dbl lrt; ll irt;
		lrt = sqrt(n);
		irt = sqrt(n);	
		
//		cout << lrt << " " << irt << "\n";
		if (lrt - irt != 0)
		{
			cout << "NO" << "\n";
			continue;
		}
		
		if (!pr[irt])
		{
			cout << "YES" << "\n";
			continue;
		}
		else
		{
			cout << "NO" << "\n";
			continue;
		}
	
		
		
	}
	
	
	
	

	
	
	
}
