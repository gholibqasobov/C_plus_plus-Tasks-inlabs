#include <iostream>

using namespace std;

int main(){
		
	long int x, y, a, b;
	
	cin >> x >> y >> a >> b;
	
	
	if(x+y>=a+b && x >= a && (x-a)+y >= b){
		cout << "Yes";
	}else{
		cout << "No";
	}
	
	
	
	return 0;
}
