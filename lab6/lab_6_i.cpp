#include <iostream>

using namespace std;

int main(){
	
	string txt;
	cin >> txt;
	
	for(int i = 0; i < txt.length(); i++){
		if(i % 2 == 0 && txt[i] >= 97 && txt[i] <= 122){
			txt[i] -= 32;
			cout << txt[i];
		} else cout << txt[i];
	}
	
	//cout << txt;
	
	
	
	return 0;
}
