#include <iostream>

using namespace std;

int main(){
	
	int n, i , j, max1, max2;
	
	cin >> n;
	
	int arr[n][n];
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	max1 = max2 = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] > max1){
				max2 = max1;
				max1 = arr[i][j];
			} else if(arr[i][j] > max2 && arr[i][j] < max1)
				max2 = arr[i][j];
		}
	}
	
	cout << max2;
	
	return 0;
}
