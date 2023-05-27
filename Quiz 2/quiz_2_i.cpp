#include <iostream>

using namespace std;



void convertToMax(int n){
	int i , j, max = 0;
	
	int mat[n][n];
	int result[n];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}
	
	i = 0; 
	while(i < n){
		for(j = 0; j < n; j++){
			if(mat[i][j] > max){
				max = mat[i][j];
			}
		}
		
		result[i] = max;
		max = 0;
		i++;
	}
	
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			mat[i][j] = result[i];
			cout << mat[i][j] << ' ';
		}
		
		cout << endl;
	}
	
	
	
	
}



int main(){
	int n;

	
	cin >> n;
	
	convertToMax(n);
	
	
}
