#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr(i, j) for(i = 0; i < j; i++)

using namespace std;

int main()
{
	int n = 0, k = 0, time = 0;
	cin >> n >> k;
	
	vector< pair<int, string> > arr;
	
	int i  = 0;
	string temp, pass;
	
	fr(i, n)
	{
		cin >> temp;
		arr.pb(mp(temp.length(), temp));
	}
	
	cin >> pass;
	
	int len = pass.length();
	
	sort(arr.begin(), arr.end());
	
	fr(i, n)
	{
		if (arr[i].first >= len)
			break;
	}
	
	time = i + (i/k * 5);
	
	int index ;
	int max_t = 0;
	int min_t = time + 1;
	for(index = i; (n) != index; index++)
	{	
		if (arr[index].first <= len) 
			max_t++;
		else
			break;
	}
	
	max_t--;
	
	max_t = max_t + i + ((max_t + i)/k * 5) + 1;
	
	cout << min_t << " " << max_t << "\n";
		
}
