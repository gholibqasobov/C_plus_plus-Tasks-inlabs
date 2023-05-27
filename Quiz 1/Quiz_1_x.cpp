#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	cin >> a >> b >> c;
	
//	if(a == b || b == c || a == c ){
//		cout << "YES";
//	} else if(a == b && b == c)
//		cout << "NO";
	
	if(a == b && b == c){
		cout << "NO";
	}else if(a == b || a == c || b == c){
		cout << "YES";
	} else 
		cout << "NO";
	
	return 0;
}
