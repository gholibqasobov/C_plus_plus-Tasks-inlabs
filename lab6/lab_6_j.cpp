#include <iostream>

using namespace std;


int main(){
	
	long int arr[4];
	
	for(int i = 0; i < 4; i++){
		cin >> arr[i];
	}
	
	int max = INT32_MIN;
	
	for(int i = 0; i < 4; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	cout << max;
	
	
	
	return 0;
}
