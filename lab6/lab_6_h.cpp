#include <iostream>

using namespace std;

int main(){
	
	int n, r = 0;
	
	cin >> n;
	
	bool p = true;
	
	while(n > 0){
		r = n % 10;
		
		
		if(r % 2 != 0){
			p = false;
			break;
		} else p = true;
		
		
		
		n /= 10;
	}
	
	if(p) cout << "Valid"; else cout << "Not valid";
	
	
	return 0;
}
