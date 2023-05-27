#include <iostream>

using namespace std;

void halfOfRem(int n){
	int r, s = 0;
	
	while(n > 0){
		r = n % 10;
		
		s += r/2;
		
		n/= 10;
	}
	
	cout << s;
}


int main(){
	
	int n;
	
	cin >> n;	
	
	halfOfRem(n);
	
}
