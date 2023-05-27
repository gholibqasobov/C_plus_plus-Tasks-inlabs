#include <iostream>

using namespace std;

string shiftLetter(string s){
	for(int i = 0;i < s.length(); i++){
		if(s[i] >= 97 and s[i] <= 122 or s[i] >= 65 and s[i] <= 90){
			if(s[i] == 122){
				s[i] = 97;
			} else if(s[i] == 90){
				s[i] = 65;
			} else{
				s[i] += 1;
			}
		} else s[i];
		
	}
	
	return s;
}

int main(){
	
	string s;
	getline(cin, s);
	string ss = shiftLetter(s);
	
	for(int i = 0;i < ss.length(); i++){
		cout << ss[i];
	}
}
