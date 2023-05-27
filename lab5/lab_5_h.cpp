#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int z = 0;
	int a[12];
	string s, t = "0123456789";
	cin >> s;
	for (int i = 0; i < 11; i++) {
		a[i] = 0;
	}
	for (int i = 0; i < s.length(); i++) {
		if (t.find(s[i]) > 0 && t.find(s[i]) <= 10) {
			a[t.find(s[i]) - 1]++;
		}
	}
	sort(a, a + 10);
	for (int i = 1; i <= 9; i++) {
		if (a[i] != a[i - 1]) {
			z++;
		}
	}
	if (z > 1) {
		cout << "NO";
	}
	else {
			cout << "YES";
	}
}
