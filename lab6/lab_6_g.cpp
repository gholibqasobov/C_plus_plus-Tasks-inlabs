#include <iostream>
using namespace std;

int main(){
	
	string txt;
	
	getline(cin, txt);
	
//	string v[10] = {'a', 'o', 'i', 'u', 'e', 'A', 'O', 'I', 'U', 'E'}
	
	for(int i = 0; i < txt.length(); i++){
		if(txt[i] == 'a' || txt[i] == 'o' || txt[i] == 'i' || txt[i] == 'u' || txt[i] == 'e' || txt[i] == 'A' || txt[i] == 'O' || txt[i] == 'I' || txt[i] == 'U' || txt[i] == 'E'){
			continue;
		}
		else{
			cout << txt[i];
		}


		
	}
	
//	cout << txt;
	
	
	
	
	return 0;
}
