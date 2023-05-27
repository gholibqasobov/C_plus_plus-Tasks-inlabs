#include <iostream>

using namespace std;

int main() {
	int n, arr[n], p = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		if(arr[i] >= 0) {
			p++;
		}
	}
	cout << p;
}
