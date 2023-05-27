#include <bits/stdc++.h>

using namespace std;


void to_binary(int n){
	int r;
	char d;
	string s;
	stringstream ss;
	int i = 0;
	while(n > 0){
		r = n % 2;
		ss << r;
		ss >> d;
		s += d;
		n /= 2;
	}
	
	reverse(s.begin(), s.end());
	
	cout << s;
}


int main(){
	
	int n;
	
	cin >> n;
	
	to_binary(n);
	
	
	
}
