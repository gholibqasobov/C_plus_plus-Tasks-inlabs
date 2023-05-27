#include <iostream>

using namespace std;

int main(){
	
	string txt;
	int n, s = 0;
	
	cin >> txt;
	cin >> n;
	
	for(int i = 0; i < txt.length(); i++){
		if(txt[i] >= 48 && txt[i] <= 57){
			s++;
		}
	}
	
	if(s >= n) cout << "YES"; else cout << "NO";
	
	return 0;
}



// 48 - 57
