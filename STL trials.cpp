#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int, pair<int, int> > lol;
	lol[3] = make_pair(1, 2);

	
	if (lol.find(3) == lol.end())
		cout << "N/A";
	else
		cout << (*lol.find(3)).second.second;
}

