#include <iostream>

using namespace std;

int main(){
	string str;
	
	char p;
	char l;
	cin >> p;
	cin >> str;
	
	for(int i = 0; i< str.length(); i++){
		l = str[i];
		if(l != p){
			cout << str[i];
		}
	}
	
	
	
}
