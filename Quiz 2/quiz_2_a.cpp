#include <iostream>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; ++i){
		cin >> arr[i];
	}
	
	int l_s = 0;
	
	int r_s = 0;
	
	int l_c = 0;
	int r_c = 0;
	
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			l_c++;
			l_s += arr[i];
		} else if(arr[i] % 2 != 0){
			r_c++;
			r_s += arr[i];
		}
	}
	
	int l_hand_m = l_c * l_s;
	int r_hand_m = r_c * r_s;
	
	cout << "Left hand magic power: " << l_hand_m << endl;
	cout << "Right hand magic power: " << r_hand_m;
	
	
	
	return 0;
}
