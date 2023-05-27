#include <iostream>
using namespace std;

int main() {
	
//	int n, m, secret_code, last_num;
//	
//	cin >> n;
//	cin >> secret_code;
//	if(secret_code<1000){
//	
//	last_num = secret_code % 10;
//	while(secret_code >= 10) {
//		secret_code /=10;
//	}
//	
//	m = last_num + secret_code;
//	cout << m + n;
//	}
//	else
//		cout<<"please enter 3 digit number.";









	int age, code, last_digit;
	
	cin >> age >> code;
	
	if(code <= 1000) {
		last_digit = code % 10;
		while(code >= 10){
			code /= 10;
		}
		
		age += code + last_digit;
		
		cout << age;
	}







	
	
	return 0;
	

}

// in order to get the last_num, secrete_code % 10 which leaves the remainder. The remainder is the last digit of the secret code.
