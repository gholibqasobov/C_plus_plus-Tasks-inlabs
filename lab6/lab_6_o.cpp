#include <iostream>

using namespace std;

int main(){
	
	int n, s= 0;
	
	cin >> n;
	
	int l_digit = n % 10;
	
	while(n > 0){
		s += n % 10;
		n/= 10;
	}
	
	if(s % l_digit == 0){
		cout << "Yes";
	} else cout << "No";
	
	
	return 0;
}
