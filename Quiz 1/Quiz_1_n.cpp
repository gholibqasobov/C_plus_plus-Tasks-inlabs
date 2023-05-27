#include <iostream>

using namespace std;

int main(){
	
	int a, b, c, flag = 0;
	
	cin >> a >> b >> c;
	
	
	// we got to write that if the sides differ only with d of 1, it's a triangle
	
//	if(b - a == 1 && c - b == 1 || a == b || a == c || b ==c){
//		cout << "Yes";
//	} else {
//		cout << "No";
//	}

	if(a>b){
		flag = ((b + c) >= a && b - a == 1 && c - b == 2);
	} else if(b > c && b - a == 1 && c - b == 2) {
		flag = ((a+c) >= b);
	}else{
		flag = ((a + b) >= c);
	}
	
		if(flag){
			cout << "Yes";
		}else{
			cout << "No";
		}
	
	
	
	
	
	
	return 0;
}
