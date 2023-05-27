#include <iostream>
//#include <bits.stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s = 0;
	
	cin >> n;
	
	int arr[n];
	
	int max = INT8_MIN;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		
		if(arr[i] > max){
			max = arr[i];
		}
		
		s += arr[i];
	}
	

	cout << s << " " << max;
	
	
	
	
	
	return 0;
}
