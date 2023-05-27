#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string str) {
	string rev = str;
	reverse(str.begin(), str.begin() + str.size());
	return rev==str;
}

int main() {
	string str;
	cin >> str;
	sort(str.begin(), str.end());
	do {
		if (isPalindrome(str)) {
			cout << "ZA WARUDO TOKI WO TOMARE" << endl;
			return 0;
		}
	} while(next_permutation(str.begin(), str.end()));
	cout << "JOJO";
	return 0;
}


