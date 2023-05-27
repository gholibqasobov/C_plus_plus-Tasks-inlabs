//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(){
//	
//	string txt;
//	string check_txt;
//	
//	cin >> txt >> check_txt;
//	
//	int t_len = txt.length();
//	int c_len = check_txt.length();
//	
//	int end = t_len - c_len + 1;
//	bool check_found;
//	for(int i = 0; i < end; i++){
//		check_found = true;
//		for(int j = 0; j < c_len; j++){
//			if(check_txt[j] != txt[i + j]){
//				check_found = false;
//			}
//		}
//	}
//	
//	if(check_found){
//		cout << "YES";
//	} else 
//		cout << "NO";
//	
//	
//	
//	
//	
//	
//	return 0;
//}


//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int isSubstring(string s1, string s2){
//	int M = s1.length();
//	int N = s2.length();
//	
//	for(int i = 0; i <= N - M; i++){
//		int j;
//		
//		for(j = 0;  j< M; j++){
//			if(s2[i + j] != s1[j]){
//				break;
//			}
//		}
//		
//		if(j == M)
//			return i;
//			
//			
//	}
//	
//	return -1;
//
//
//}
//
//
//
//
//
//int main(){
//	
//	
//	string s1;
//	string s2;
//	
//	cin >> s1 >> s2;
//	
//	int res = isSubstring(s1, s2);
//	
//	if(res == -1){
//		cout << "NO";
//	} else
//		cout << "YES";
//	
//	
//	
//	return 0;
//}












#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	
	string txt1, txt2;
	bool s = false;
	cin >> txt1 >> txt2;
	
	s = (txt1.find(txt2) != string::npos);
	
	if(s){
		cout << "YES";
	} else cout << "NO";
	
	
	
	
	
	return 0;
}




