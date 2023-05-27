//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(){
//	
//	string chipher_txt;
//	
//	getline(cin, chipher_txt);
////	cin >> chipher 
////	for(int i = 0; i < 26; i++){
//		for(int j = 0; j < chipher_txt.length(); j++){
//			
////			char a = char(int(chipher_txt[i] + j - 97) % 26 + 97);
//			char a;
//			if(chipher_txt[j] != 'z'){
//				a = chipher_txt[j] + 1;
//			} else
//				chipher_txt[j] = 97;
//			cout << a;
//		}
//		
//		cout << endl;
////	}
//	
//	
//	// 
//	
//	return 0;
//}


#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string txt;
	
	cin >> txt;
	
	for(int i = 0; i < txt.length(); i++){
		char a = (txt[i] - 97) % 26 + 98;
		if(txt[i] == 'z'){
			a = 'a';
		}
		cout << a;
	}
	
	
	
	
	
	return 0;
}
