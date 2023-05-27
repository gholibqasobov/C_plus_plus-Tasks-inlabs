#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;


int main(){
	
	string l;
	
//	getline(cin, l[100]);
	cin >> l;
	
	int l_len = l.size();
	int s = 0, c = 0;
	for(int i = 0; i < l_len; i++){
		if(l[i] >= 65 && l[i] <= 90){
			c++;
		}else if(l[i] >= 97 && l[i] <= 122){
			s++;
		}
	}
	
	cout << s << " " << c;
	
	
	
	
	return 0;
}
