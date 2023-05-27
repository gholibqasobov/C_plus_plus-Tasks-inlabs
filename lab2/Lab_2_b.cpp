#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n > 0){

		if(n % 2 != 0){
			cout << "Super";
		}else if(n % 2 == 0 && n < 5){
			cout << "Not Super";
		}else if(n % 2 == 0 && n <= 20){
			cout << "Super";
		}else if(n % 2 == 0 && n > 20) {
			cout << "Not Super";
		}
	} else
		cout << "Not a Positive Integer!";
	
	
	return 0;	
}
