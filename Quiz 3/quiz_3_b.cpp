#include <iostream>

using namespace std;

void cutLetter(char letter, string s){
	for(int i = 0;i < s.length(); i++){
		if(s[i] != letter){
			cout << s[i];
		} else continue;
	}
}

int main(){
	char letter;
	cin >> letter;
	string s;
	cin >> s;
	cutLetter(letter,s);
	 	
}
