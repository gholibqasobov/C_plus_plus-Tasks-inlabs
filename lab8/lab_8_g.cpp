#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n){
	for(int i = 2; i < sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
	
}

int main(){
    
    int n;
    cin >> n;
    vector<int> arrs(n);
    
    for(int i = 0;i < n;i++){
    	cin >> arrs[i];
	}
	
	int k;
	cin >> k;
	int count = 0;
	for(int i = 0;i < n; i++){
		if(arrs[i] > k and isPrime(arrs[i])){
			count ++;
		}
	}
    
    cout << count;
    
}
