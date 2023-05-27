#include <iostream>
using namespace std;

int main() {
	int n, num = 0;
	int arr[n];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] % 10 == 7){
			num++;
		}
	}
	
	cout << num;
		
	return 0;
}
