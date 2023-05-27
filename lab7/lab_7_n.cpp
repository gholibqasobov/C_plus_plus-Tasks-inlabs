#include <bits/stdc++.h>


using namespace std;

void isCheater(int n, int k){
	
	int arr[n];
	bool p = false;
	for(int i= 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);
	
	int arr2[n];
	
	for(int i = 0; i < n; i++){
		if(arr[i + 1] - arr[i]> 0 && arr[i + 1] - arr[i] <= k){
			p = true;
			break;
		} else p = false;
	}

	
	if(p)
		cout << "cheater";
	else cout << "no";
	
	
}

int main(){
	
	int n, k;
	
	cin >> n >> k;
	
	isCheater(n, k);
	
	
	
}
