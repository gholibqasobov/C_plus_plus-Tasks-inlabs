#include <iostream>

using namespace std;

int main(){
	
	int n, a, d;
	
	cin >> n >> a >> d;
	int sum = 0;
	
	for(int i = 0; i < n; i++){
		cout << a + (d * i) << " ";
		sum += a + (d * i);
	}
	cout << endl;
	cout << "sum: " << sum;
	
	
	return 0;
}
