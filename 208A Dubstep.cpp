#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fr(i, j) for(i = 0; i < j; i++)

using namespace std;

int main()
{
	string s, res = "";
	
	cin >> s;
	
	while(s != "")
	{
		if(!s.find("WUB"))
		{
			s.erase(0, 3);
		}
		else
		{
			res = res + s.substr(0, s.find("WUB")) + " ";
			s.erase(0, s.find("WUB"));
		}
	}
	
	cout << res;
	
	
	
}
