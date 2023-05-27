//#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main(){
	
	int n, x, y;
	
	cin >> n;
	
	int arr[n][n];
	int max = INT8_MIN;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				
				if(arr[i][j] > max){
					max = arr[i][j];
					x = i + 1;
					y = j + 1;
				}
				
				
			} //else
//				cout << ".";
		}
//		cout << endl;
	}
	
//				cout << max << " and " << x << ";" << y;
				cout << "Maximum element is: " << max << " with coordinates: " << x <<  ";" << y;
	
	return 0;
}
