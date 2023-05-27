#include <iostream>
using namespace std;


void gud_stdnt(int n){
		int arr[2][n];
		int t;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	cin >> t;
	
	int count = 0;
	for(int i = 0; i < n; i++){
		
			if(arr[0][i] <= t and arr[1][i] >= t){
				count++;
			}
	}
	
	cout << count;
}

int main(){
	int n;
	cin >> n;
	gud_stdnt(n);
	
}
