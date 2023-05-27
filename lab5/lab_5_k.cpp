#include <iostream>

#include <string>

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string txt;
	int c = 0;
	cin >> txt;
//	a, e, i, o, and u
	for(int i = 0; i < txt.length(); i++){
		if(txt[i] == 'a'|| txt[i] == 'e' || txt[i] == 'o' || txt[i] == 'i' || txt[i] == 'u'){
			c++;
		}
	}
	
	cout << c;
	
	
	
	
	return 0;
}
