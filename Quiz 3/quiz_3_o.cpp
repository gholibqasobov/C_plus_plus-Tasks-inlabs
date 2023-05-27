#include <iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	int max = 0;
	char d;
	
	for(int i = 0;i < s.length(); i++){
		int cnt = 1;
		for(int j = i+1;j < s.length(); j++){
			if(s[i] == s[j]){
				cnt++;
			} else break;
			

		}
			if(cnt > max){
				max = cnt;
				d = s[i];
			}
	}
	
	cout << d << ' ' << max;
	
	
	
}
