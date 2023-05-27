#include <iostream>
using namespace std;

int main() {
	int n, num = 0;
	int arr[n];
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		while(arr[i] >= 10){
			if(arr[i] % 10 == 0){
				num++;
			}
		
			arr[i]/= 10;
		}
	}
	
	cout << num;
		
	return 0;
	
	
}
