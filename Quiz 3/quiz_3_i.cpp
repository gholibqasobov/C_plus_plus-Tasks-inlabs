#include <iostream>

using namespace std;

string replaceString(string s, string rs, char d){
	for(int i = 0;i < s.length(); i++){
		for(int j = 0; j < rs.length(); j++){
			if(s[i] == rs[j]){
				s[i] = d;
			}
		}
	}
	
	return s;
	
}

int main(){
	string s;
	string rs;
	cin >> s;
	cin >> rs;
	char d;
	cin >> d;
	
	string replacedString = replaceString(s, rs, d);
	cout << replacedString;
	
	
	
}
