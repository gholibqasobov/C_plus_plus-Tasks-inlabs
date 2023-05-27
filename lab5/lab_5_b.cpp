#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string l;
	
	getline(cin, l);
	
	for(int i = 0; i < l.length(); i++){
		if(l[i] >= 97 && l[i] <= 122){
			l[i] -= 32;
		}
	}
	
	cout << l;
	
	return 0;
}
