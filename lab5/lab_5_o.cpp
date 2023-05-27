#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	string s, t = "abcdefghijklmnopqrstuvwxyz", c = "";
	cin >> s;
	for (int i = 0; i < t.size(); i++) {
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == t[i]) {
				c = t[i];
			}
		}
	}
	cout << c;
}
