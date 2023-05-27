#include <iostream>

using namespace std;

int main(){
	
	int n, s = 0;
	
	while(cin >> n){
		s += n;
		if(n == 0) break;
	}
	
	cout << s;
	
	
}
