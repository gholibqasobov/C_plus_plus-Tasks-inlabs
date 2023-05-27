#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	int arr1[n];
	int arr2[n];
	
	for(int i = 0; i <n; i++){
		cin >> arr1[i];
	}
	
	for(int i = 0; i < n; i++){
		cin >> arr2[i];
	}
	int r[n];
	for(int i = 0; i < n; i++){
		r[i] = arr1[i] - arr2[i];
	}
	
	for(int i = 0; i < n; i++){
		cout << abs(r[i]) << " ";
	}
	
	
	
	
	return 0;
}
