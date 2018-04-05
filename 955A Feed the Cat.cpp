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
	int hh, mm, h, d, c, n, temp;
	
	cin >> hh >> mm;
	cin >> h >> d >> c >> n;
	
	double result = 0, result1 = 0, result2 = 0;
	
	if (h%n == 0)
		result2 = (h/n) * c;
	else
	{
		temp = h/n + 1;
		result2 = (temp) * c;
	}
		
	if (hh >= 20)	
	{
		h = h;
	}
	else
	{
		h += ((20 - hh)*60 - mm)*d;
	}
	
			
	if (h%n == 0)
		result1 = (h/n)*(0.80 * c);
	else
	{
		temp = h/n + 1;
		result1 = (temp)*(0.80 * c);
	}
	
	
	result = min(result1, result2);
	printf("%llf", result);
}

