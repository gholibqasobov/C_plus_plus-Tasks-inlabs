#include <iostream>
using namespace std;
int main (){
	int n;
	
	cin >> n;
	
	int arr[n];
	
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int k = arr[0], p = 1;
	
	for(int i = 0; i < n; i++){
		if(arr[i] > k){
			k = arr[i];
			p = i+1;
		}
	}
	
	cout << p;
	
	
	return 0;
}
