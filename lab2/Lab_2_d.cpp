#include <iostream>
using namespace std;

// look through the code again and see what happened!


int main() {
	int n, k;
	
	cin >> n >> k;
	
	if(n>k && n%2!=0 && k%2==0){
		cout << (n/k)*2 + (n%k);
	} else if(n > k && n % 2 != 0 && k%2 != 0){
		cout << (n/k) * 2 + 2;
	} else if(n < k){
		cout << 2;
	}
	
}

// if steaks are more than pans and steaks are odd and pans are even,
// 
