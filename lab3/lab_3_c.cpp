#include <iostream>
using namespace std;
int main (){
	int n, m;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];}
	    m = arr[1];
	for (int i=0; i <n; i++){
	if (arr[i] > m) {
		m = arr[i];
        }
	}
	cout << m;	
	return 0;
}

