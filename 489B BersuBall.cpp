
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
	int a, b, c = 0;
	cin >> a;
	vi q1(a);
	fr(i,0,a)
	{
		cin >> q1[i];
	}
	cin >> b;
	vi q2(b);
	fr(i,0,b)
	{
		cin >> q2[i];
	}
	
	sort(all(q1));
	sort(all(q2));
	
	int j = 0;
	{
		fr(i,0,a)
		{
			fr(k, j, b)
			{	
//				cout << q1[i] << " " << q2	[j] << endl;
				if(q1[i] - q2[j] > 1)
				{
					j++;
					continue;
				}
				if(q2[j] - q1[i] > 1)
					break;
				
				c++;
				j++;
				break; 
			}
		}
	}	
	cout << c;
}



