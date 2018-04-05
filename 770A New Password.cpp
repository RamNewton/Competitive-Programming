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
	string a = "abcdefghijklmnopqrstuvwxyz";
	string b, res = "";
	int n, k;
	cin >> n >> k;
	int m = n / k;
	
	b = a.substr(0,k);
	
	for(int i = 1; i <=m; i++)
		res = res + b;
	
	res = res + b.substr(0, (n%k));
	
	cout << res;
}

