#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	int arr[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	bool p = true;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j){
				if(arr[i][j] != arr[j][i]){
					p = false;
				}
			}
		}
	}
	
	if(p){
		cout << "Perfect.";
	} else cout << "Not perfect.";
	
}
