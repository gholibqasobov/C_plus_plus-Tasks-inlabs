#include <bits/stdc++.h>

using namespace std;

void evenCount(string s){
	
	int r, cnt = 0;
	string d;
	for(int i = 0; i < s.length(); i++){
		d = s[i];
		r = atoi(d.c_str());
		
		if(r % 2 == 0){
			cnt++;
		}
	}
	
	cout << cnt;
}


int main(){
	string s;
	
	cin >> s;
	
	evenCount(s);
	
	
	
}
