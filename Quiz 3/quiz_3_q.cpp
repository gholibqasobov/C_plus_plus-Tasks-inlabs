#include <iostream>
#include <string>
//#include <algorithm>
using namespace std;



int main(){
	
	int n;
	cin >> n;
	string s[n];
	
	for(int i = 0;i < n; i++){
		cin >> s[i];
	}
	
	string sub_s = "@gmail.com";
	string tmp = "";
	
	for(int i = 0;i < n; i++){
		tmp = s[i];
		if (tmp.find(sub_s) != string::npos) {
			tmp.erase(tmp.end()-10, tmp.end());
			cout << tmp << endl;
		} else {
			continue;
		}
		
	}
	
	tmp = "";
		
	
}



