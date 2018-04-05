#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr(i, j) for(i = 0; i<j; i++)
#define endl "\n"

using namespace std;
int main()
{
	ll n;
	cin >> n;
	vector< pair<ll,ll> > arr;
	vector<ll> res(n, 0);
	ll i = 0, temp = 0;
	
	fr(i, n)
	{
		cin >> temp;
		arr.pb(mp(temp, i));
	}
	
	sort(arr.begin(), arr.end());
	
	
	ll prev = arr[0].first;
	
	res[arr[0].second] = arr[0].first;
	
	for(i = 1; i < n; i++)
	{
		if (arr[i].first > prev)
		{	
			res[arr[i].second] = arr[i].first;
			prev = arr[i].first;
			continue;
		}
		
		if (arr[i].first <= prev)
		{
			res[arr[i].second] = prev + 1;
			prev = prev + 1;
			continue;
		}
	}
	
	fr(i, n)
		cout << res[i] << " ";
	
	return 0;
	
}
