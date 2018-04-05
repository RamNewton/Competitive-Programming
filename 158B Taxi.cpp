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
	
	vector<int> a(5, 0);
	
	int temp = 0;
	int ans = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a[temp]++;
	}
	
	ans += a[4];
	a[4] = 0;

	if (a[2]%2 == 0)
	{
		if (a[2] >= 2)
			ans+=a[2]/2;
		a[2] = 0;
	}
	else
	{
		ans += (a[2]/2);

		a[2] = 1;
//		cout << "hi";
	}
	
	
	if(a[1] >= a[3])
	{
		ans += a[3];
		a[1]-= a[3];
		a[3] = 0;
	}
	else
	{
		ans += a[1];
		a[3]-= a[1];
		a[1] = 0;
	}
	
	
	if (a[1] == 0)
	{
		ans+=a[3];
		ans+=a[2];
		cout << ans;
		return 0;
	}
	
	else
	{
		if(a[2] != 0)
		{
			if (a[1] >= 2)
			{
				ans  += a[2];
				a[1] -= 2;
				if ((a[1] % 4) != 0)
				{
					ans += ((a[1])/4) + 1;
				}
				else
					ans += ((a[1])/4);
				cout << ans;
				return 0;
			}
			else
			{
				ans  += a[2];
				cout << ans;
				return 0;
			}

		}
		else
		{
			if ((a[1] % 4) != 0)
			{
				ans += ((a[1])/4) + 1;
			}
			else
				ans += ((a[1])/4);
			cout << ans;
			return 0;
		}
	}
	
	
	
}

