#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void maxProduct(int n){
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int max = INT_MIN;
	int sec_max = INT_MIN;
	
	for(int i = 0; i < n; i++){
		if(arr[i] > max){
			sec_max = max;
			max = arr[i];
		} else if(arr[i] > sec_max && arr[i] << max){
			sec_max = arr[i];
		}
	}
	
	cout << max * sec_max;
}


int main(){
	
	int n;
	
	cin >> n;
	
	maxProduct(n);
	
	
}
