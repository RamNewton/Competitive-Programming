#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> arr(n);
	
	int i = 0, temp = 0;
	
	for (i = 0 ; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	
	int count = 0;

	temp = arr[0];
	
	for(i = 0; arr[i] == temp; i++)
	{
		count ++;
	}
	
	if( count % 2 )
		cout << "Conan";
	else
		cout << "Agasa";
}
