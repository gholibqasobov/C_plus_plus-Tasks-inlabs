#include <iostream>
#include <string>

using namespace std;

int main(){
	
	
	string text;
	
	getline(cin, text);
	bool p = false;
	
	for(int i = 0; i < text.length()/ 2; i++){
		if(text[i] == text[text.length() - i - 1]){
			p = true;
		} else 
			p = false;
	}
	
	if(p){
		cout << "YES";
	} else
		cout << "NO";
	
	
	
	
	
	return 0;
}
