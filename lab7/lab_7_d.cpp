#include <bits/stdc++.h>

using namespace std;


void sumOfDigits(string s){
	string d;
	int sum = 0;
	
	for(int i = 0; i < s.length(); i++){
		d = s[i];
		sum += atoi(d.c_str());
	}
	
	cout << sum;
}


int main(){
	
	string s;
	
	cin >> s;
	
	sumOfDigits(s);
	
	
}
