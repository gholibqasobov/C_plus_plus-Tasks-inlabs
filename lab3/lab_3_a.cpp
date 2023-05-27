#include <iostream>

using namespace std;

int main() {
	int n, arr[n];
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		
	}
	
	for(int i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			cout << " " << arr[i];
		}
	}
	
	return 0;
	
}
