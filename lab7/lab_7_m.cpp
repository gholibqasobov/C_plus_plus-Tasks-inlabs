#include <iostream>
using namespace std;

int digits(int n) {
	int i = 1;
	while (i <= n){
		cout << i << ' ';
		i++;
	}
}

int main() {
    int n, result;

    cin >> n;

    digits(n);
    
    return 0;
}
