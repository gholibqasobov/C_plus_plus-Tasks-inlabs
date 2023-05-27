#include <iostream>

using namespace std;

int main(){
	int n, m, s = 0;
	
	cin >> n >> m;
	
	int arr[n][m];
	
	for (int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
			
			
			
		if(arr[i][j] < 0){
			s++;
		}
		}
		
	}
	
	cout << s;
	
}
