#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string txt;
	char l;
	int n, c = 0;
	
	cin >> txt >> l >> n;
	
	for(int i = 0; i < txt.length(); i++){
		if(txt[i] == l){
			c++;
		}
	}
	
	if(c == n){
		cout << "YES";
	} else cout << "NO";
	
//	cout << c;
	
	
	
	
	return 0;
}
