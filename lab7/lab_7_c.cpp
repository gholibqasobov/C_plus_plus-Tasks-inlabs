#include <iostream>

using namespace std;


void doesExist(int n){
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	int x;
	cin >> x;
	bool p = false;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			p = true;
			break;
		} else p = false;
	}
	
	if(p) cout << "Yes";
	else cout << "No";
	
	
	
}


int main(){
	int n;
	cin >> n;
	doesExist(n);	
}
