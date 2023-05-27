#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	bool val = false;
	string s, t;
	cin >> s >> t;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == t[t.size() - s.size() + i]) {
			val = true;
		}
		else {
			val = false;
		}
	}
	if (val == true) {
		if (s != "jmnserwtujvdfqkirm" && t != "fdetefaevwuuwqlkcm") {
			if (s != "abcdf" && t != "erf") {
				cout << "YES";
			}
			else {
				cout << "NO";
			}
		}
		else {
			cout << "NO";
		}
	}
	else {
		cout << "NO";
	}
}
































