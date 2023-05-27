#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	
	if(n > m) {
		cout << 1;
	} else if(n < m) {
		cout << 2;
	} else if (n == m){
		cout << 0;
	}
	
	return 0;
}
