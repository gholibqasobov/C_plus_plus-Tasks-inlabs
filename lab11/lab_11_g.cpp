//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <set>
using namespace std;

map <string, set <int> > attendance;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int k;
		cin >> s >> k;
		attendance[s].insert(k);
	}
	for (auto s : attendance) {
		cout << s.first << " ";
		if (s.second.size() < 3)
			cout << "NO BONUS" << endl;
		else cout << "+1" << endl;
	}
	return 0;
}
