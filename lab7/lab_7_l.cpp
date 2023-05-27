#include <bits/stdc++.h>

using namespace std;

void isPalindrome(string s){
	string r = s;
	
	reverse(r.begin(), r.end());
	
	if(r == s){
		cout << "Yes";
	} else cout << "No";
}

int main(){
	string s;
	
	cin >> s;
	
	isPalindrome(s);
}
