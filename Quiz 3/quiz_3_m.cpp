#include <iostream>

using namespace std;

bool isDelicious(string s){
	int sum = 0;
	for(int i = 0;i < s.length(); i++){
		sum += s[i];
	}
	
	if(sum > 300){
		return true;
	} else return false;
}

int main(){
	
	string s;
	cin >> s;
	
	bool p = isDelicious(s);
	
	if(p){
		cout << "It is tasty!";
	} else cout << "Oh, no!";
	
}
