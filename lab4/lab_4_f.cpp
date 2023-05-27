#include <iostream>

using namespace std;

int main(){
	
	int n, i_ind, j_ind;
	
	cin >> n;
	
	int arr[n][n];
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	int max = INT8_MIN;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] > max){
				max = arr[i][j];
				i_ind = i + 1;
				j_ind = j + 1;
			}
		}
	}
	
	cout << i_ind << " " << j_ind;
	
	
	
	
	
	
	
	return 0;
}
