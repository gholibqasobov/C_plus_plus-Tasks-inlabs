#include <iostream>

using namespace std;

void clearOdd(string s){
	for(int i = 0;i < s.length(); i++){
		if(s[i] >= 97 and s[i] <= 122 or s[i] >= 65 and s[i] <= 90){
			cout << s[i];
		} else continue;
	}
	
}

int main(){
	
	string s;
	cin >> s;
	
	clearOdd(s);
	
}
