//#include <iostream>
//
//using namespace std;
//
//int main(){
//	
//	string s1, s2;
//	
//	cin >> s1 >> s2;
//	bool e = true;
//	for(int i = 0; i < s1.size(); i++){
//		for(int j = 0; j < s2.size(); j++){
//			if(s1[i] == s2[j]){
//				e = true;
//			} else e = false;
//		}
//	}
//	
//	if(e) cout << "YES";
//	else cout << "NO";
//	
//	return 0;
//}




//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//	string s, t;
//	cin >> s >> t;
//	int c = t.size();
//	for (int i = 0; i < s.size(); i++) {
//		for (int j = 0; j < t.size(); j++) {
//			if (s[i] == t[j]) {
//				t.erase(j, 1);
//				break;
//			}
//		}
//	}
//	if (s.size() == c && t.size() == 0) {
//		cout << "YES";
//	}
//	else {
//		cout << "NO";
//	}
//}



#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	string txt1, txt2;
	
	cin >> txt1 >> txt2;
	
	
	int t = txt2.size();
	
	for(int i = 0; i < txt1.size(); i++){
		for(int j = 0; j < txt2.size(); j++){
			if(txt1[i] == txt2[j]){
				txt2.erase(j, 1);
				break;
			}
		}
	}
	
	if(txt1.size() == t && txt2.size() == 0){
		cout << "YES";
	} else cout << "NO";
	
	
	return 0;
}






























