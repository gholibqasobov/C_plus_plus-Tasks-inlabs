#include <bits/stdc++.h>

using namespace std;

int main(){
	int sum = 0;
	string d, e, s;
	
	cin >> s;
	
	int n = s.length();
	
	d = s[0];
	int first_digit = atoi(d.c_str());
	
	for(int i = 1; i < n; i++){
		e = s[i];
		sum += atoi(e.c_str());
	}
	
	if(sum % 10 == first_digit){
		cout << "YES";
	} else cout << "NO";

	
}
