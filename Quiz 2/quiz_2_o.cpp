#include <iostream>
#include <cmath>
using namespace std;


void row_sum(int n, int m){
	int arr[n][m];
	
	double sum[n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		sum[i] = 0;
		for(int j = 0; j < m; j++){
			sum[i] += arr[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
			cout << floor(sum[i]/m) << " ";
	}
	
	
	
	
	
	
	
}

int main(){
	
	int n, m;
	
	cin >> n >> m;	
	row_sum(n, m);
	
	
}
