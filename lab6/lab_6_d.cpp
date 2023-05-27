#include <iostream>

using namespace std;

int main(){
	int n, x;
	cin >> n;
	
	int arr[n];
	
	for(int i =0; i < n; i++){
		cin >> arr[i];
	}
	
	cin >> x;
	bool b = false;
	for(int i= 0; i < n; i++){
		if(arr[i] == x){
			b = true;
			break;
		} else b = false;
	}
	
	if(b) cout << "Yes"; else cout << "No";
	
	
	
	
	return 0;
}
