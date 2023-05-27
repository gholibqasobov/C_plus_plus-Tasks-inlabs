#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	long double a, b, c;
	
	cin >> a >> b;
	
	c = sqrt(pow(a, 2) + pow(b, 2));
//	setprecision(c);
	cout << setprecision(4);
	cout << c;
	
	return 0;
}
