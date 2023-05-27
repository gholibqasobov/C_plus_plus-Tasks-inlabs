#include <iostream>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	int arr[n][n];
	for(int t = 0; t < n; t++){
		cout << t << " ";
	}
	
	cout << endl;
	
	for(int i = 1; i<n;i++){
		cout << i << " ";
		for(int j = 1; j < n; j++){
			arr[i][j] = i * j;
			cout << arr[i][j] << " ";
		}
		
		cout << endl;
	}
	
	
		
	
}
