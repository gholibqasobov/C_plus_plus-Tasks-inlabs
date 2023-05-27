#include <bits/stdc++.h>

using namespace std;

void maxDigit(string s){
	string f;
	int max = INT8_MIN;
	
	for(int i = 0; i < s.length(); i++){
		f = s[i];
		
		if(atoi(f.c_str()) > max){
			max = atoi(f.c_str());
		} 
	}
	
	cout << max;
}



int main(){
	string s;
	
	cin >> s;
	
	maxDigit(s);
}
