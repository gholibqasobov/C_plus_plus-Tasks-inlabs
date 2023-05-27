#include <iostream>
#include <cmath>
using namespace std;

void power_of_two(int n){
	int s = pow(2, n);
	cout << s;
	
}

int main(){
	
	double n;
	
	cin >> n;
	power_of_two(n);
	
	return 0;
}
