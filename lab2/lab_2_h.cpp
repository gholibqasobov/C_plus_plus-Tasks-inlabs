#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int even = 0, odd = 0;
	
	for(int j = 0; j < n; j++) {
		if(arr[j] % 2 == 0){
			even++;
		}else if(arr[j] % 2 != 0){
			odd++;
		}
	}
	
	cout << even << " " << odd;
	
	return 0;
}
