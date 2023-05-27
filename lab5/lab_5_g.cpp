//#include <iostream>
//
//#include <string.h>
//
//using namespace std;
//
//int main(){
//	
//	char txt1[500];
//	char txt2[500];
//	
//	gets(txt1);
//	gets(txt2);
//	
//	if(strcmp(txt1, txt2) == 0){
//		cout << "YES";
//	} else cout << "NO";
//	
//	
//	return 0;
//}




#include <iostream>

using namespace std;

int main(){
	
	string txt1, txt2;
	
	cin >> txt1 >> txt2;
	
	bool p = true;
	
	for(int i = 0; i < txt1.length(); i++){
		for(int j = 0; j < txt2.length(); j++){
			if(txt1[i] == txt2[j]){
				p = true;
			} else p = false;
		}
	}
	
	
	if(p) cout << "YES"; else cout << "NO";
	
	
	
	
	return 0;
}
