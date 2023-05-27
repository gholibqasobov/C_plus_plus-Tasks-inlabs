#include <iostream>
using namespace std;

int GCD(int a, int b){
	int i, gcd;
	for(i = 1; i <= a and i <= b; i++){
		if(a % i == 0 and b % i == 0){
			gcd = i;
		}
	}
	
	return gcd;
}


int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	int gcd;
	int max = 0;
	int j = 0;
	for(int i = 0;i < n; i++){
		for(int j = i + 1; j< n; j++){
			if(i != j){
				gcd = GCD(arr[i], arr[j]);
				if(gcd > max){
					max = gcd;
				}
			}
		}

	}	
	cout << max;
	
	
}
