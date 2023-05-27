#include <iostream>

using namespace std;

int main(){
	
	char l;
	
	cin >> l;
	
	if(l >= 97 && l <= 122){
		l -= 32;
		cout << l;
	} else cout << l;
	
	
	
}
