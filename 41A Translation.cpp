#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr(i, j) for(i = 0; i < j; i++)

using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	
	reverse(str1.begin(), str1.end());
	
	if (str1 == str2)
		cout << "YES";
	else
		cout << "NO";
}
