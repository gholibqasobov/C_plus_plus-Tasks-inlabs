#include <iostream>

using namespace std;

int main(){
	
	int n, s;
	
	cin >> n;
	
	int arr[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j =0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j =0; j < n; j++){
			if(i + j == n - 1){
				s += arr[i][j];
			}
		}
	}	
	
				cout << s;
	
	
	return 0;
}
