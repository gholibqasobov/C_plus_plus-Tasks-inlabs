#include <iostream>
using namespace std;
int main(){
	double n, c, k=1;
	
	cin >> n >> c;
	
	while(n < c){
		n = n + (n*0.1);
		k+=1;
	}
	cout << k;
	
}
