#include <iostream>

using namespace std;


void penalty(int n, int m){
	
	int arr[n][m];
	
//	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	
	int max = INT8_MIN;
	int x;
	
	cin >> x;
	bool p = true;
	int cnt=0; 
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
//	cout << max << endl;
	if(max > x){
		cout << "Penalty!";
	} else cout << "No penalty for today.";
	
	
	
}

int main(){
	int n, m;
	
	cin >> n >> m;
	
	penalty(n, m);

	
}
