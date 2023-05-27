//#include <iostream>
//#include <string>
//#include <bits/stdc++.h>
////#include <math>
//using namespace std;
//
//int main(){
//	
//	
//	string text, txt2;
//
//	cin >> text;
//	
//	txt2 = text;
//	
//	reverse(text.begin(), text.end());
//	
//	if(txt2 == text){
//		cout << "YES";
//	} else{
//		text += text[0];
//		
//		txt2 = text;
//		
//		if(txt2 == text){
//			cout << "YES";
//		} else cout << "NO";
//	}
//

	// start
	
	
	#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	string s;
	cin >> s;
	string r = s;
	reverse(r.begin(), r.end());
	if (r == s) {
		cout << "YES";
	}
	else {
		s += s[0];
		r = s;
		reverse(r.begin(), r.end());
		if (r == s) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}
	
	
	
	
	
	// end
	
	
	


//s kldsufekl; fiowp fjl;f jwu89p ;fjsk;lf 
