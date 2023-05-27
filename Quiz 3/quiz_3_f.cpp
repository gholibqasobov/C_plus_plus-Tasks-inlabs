#include <iostream>

using namespace std;

void skipLetters(string s){
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= 97 and s[i] <= 122){
			cout << s[i];
		} else continue;
	}
}

int main(){
	string s;
	
	cin >> s;
	
	skipLetters(s);
	
	
	
	
}
