#include <iostream>
//#include  <bits/stdc++.h >

#include <cmath>
using namespace std;

int main(){
	
	int N;
	
	cin >> N;
	
	if(ceil(sqrt(N) == floor(sqrt(N)))){
		cout << "Perfecto";
	}else
		cout << "Simple";
	
	return 0;
}
