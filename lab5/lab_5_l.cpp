// char sortedtxt[100] =  sort(txt.begin(), txt.end());

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string txt, txt2;

	cin >> txt;
	txt2 = txt;
	
	sort(txt.begin(), txt.end());
	
	if(txt == txt2){
		cout << "YES";
	} else cout << "NO";
	
//	cout << txt;
	
	
	
	// char sortedtxt[100] =  sort(txt.begin(), txt.end());
	return 0;
}
