//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//int main(){
//	string s;
//	cin >> s;
//	bool p = true;
//	queue<string> arr;
//	int n = s.length();
//	for(int i = 0;i < s.length(); i++){
//		if(s[0] == ')' or s[i] == '('){
//			string tmp;
//			tmp = s[i];
//			arr.push(tmp);
//		}
//		
//		if(s[i] == ')' and s[i - 1] == '('){
//			arr.pop();
//		}
//	}
//	
//	if(arr.empty()){
//		cout << "YES";
//	} else cout << "NO";
//	
//	
//	
//	
//}


#include <iostream>
using namespace std;

int main(){
    string str;
	cin >> str;
    int count = 0;

    for(int i = 0; i < str.size() - 1; i++){
        for(int j = 0; j < str.size(); j++){
            if(str[j] == '(' and str[j + 1] == ')'){
                str += "00";
                str.erase(j, 2);
                count += 2;
                break;
                } 
        }
    }
    
    if(str.size() == count){
    	cout << "YES";
	} else cout << "NO";
}
