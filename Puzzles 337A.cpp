#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define fr(i,j,k) for(i = 0; i < j; i +=k) 

int main()
{
	int n = 0;
	int len = 0;
	ll temp = 0;
	vector<int> arr;
	cin >> n;
	cin >> len;
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		cin >> temp;
		arr.pb(temp);
	}
	ll curr = 0;
	ll minimum = INT_MAX;
	sort(arr.begin(), arr.begin() + len);
	for (i = 0; i <= len-n; i++)
	{	
		j = i + n - 1;
		curr = arr[j] - arr[i];
		minimum = min(curr, minimum);
	}
	cout << minimum;
}

