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
	int n;
	cin >> n;
	int a = 0, b = 0, c = 0, d = 0, t = 0;
	for (int i = n + 1; i <=9012; i++)
	{
		t = i;
		a = t%10; t = t/10;
		b = t%10; t = t/10;
		c = t%10; t = t/10;;
		d = t%10;
		
		if(a == b || a == c || a == d || b == d || b == c || c == d)
			continue;
		else
		{
			cout << i;
			return 0;
		}
	}
}

