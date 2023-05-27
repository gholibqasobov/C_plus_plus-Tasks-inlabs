#include <iostream>

using namespace std;

int main(){
	
	
	int n, num, dgt, rev=0;
	
	cin >> num;
	
	n = num;
	
	while(num > 0){
		dgt = num % 10;
		rev = (rev * 10) + dgt;
		num /= 10;
	}	
	
	if(n == rev){
		cout << "YES";
	} else 
		cout << "NO";
	
}























