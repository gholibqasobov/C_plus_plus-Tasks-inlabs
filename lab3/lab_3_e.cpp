#include <iostream>
using namespace std;

int main() {
	long n, s = 0;
	
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		s += arr[i];
	}
	
	cout << s;
	
}
