#include <iostream>
using namespace std;

int BinToDec(string num){
	int n = num.length();
	int base = 1;
	int decimal = 0;
	
	for(int i = n - 1; i >= 0; i--){
		if(num[i] == '1'){
			decimal += base;
		}
		base *= 2;
	}
	
	return decimal;
}

int main(){
	string num;
	cin >> num;
	cout << BinToDec(num);
}
