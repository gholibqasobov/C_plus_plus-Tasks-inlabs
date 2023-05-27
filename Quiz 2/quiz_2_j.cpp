#include <iostream>

using namespace std;

int main(){
	
	int n, r;
	
	cin >> n;
	
	int max = INT8_MIN;
	int min = INT8_MAX;
	
	while(n > 0){
		r = n % 10;
		
		if(r > max){
			max = r;
		}
		
		if(r < min){
			min = r;
		}
		
		n /= 10;
	}
	
	cout << max << ' ' << min;
	
	
	return 0;
}
