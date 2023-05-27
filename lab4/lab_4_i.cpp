#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, psq;
	
	cin >> n>> m;
	
	int arr[n][m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
			
			
			if( ceil(sqrt(arr[i][j])) == floor(sqrt(arr[i][j])) ){
				arr[i][j] = sqrt(arr[i][j]);
			} else 
				arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << arr[i][j] << " ";
		}
		
		cout << endl;
	}
}
