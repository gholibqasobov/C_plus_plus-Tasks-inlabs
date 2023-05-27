#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int l = sizeof(arr)/sizeof(arr[0]);
	
	sort(arr, arr+l);
	
	for(int i = n - 1; i >= 0; --i){
		cout << arr[i] << " ";
	}
	
}
