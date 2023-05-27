#include <iostream>

using namespace std;

int main(){
	
	int n, sum = 0, prodct = 1;
	
	cin >> n;		
	
	while(n > 0){
		sum += n % 10;
		prodct *= n % 10;
		n /= 10;
	}
	
	cout << sum + prodct;
	
	
	return 0;
}
