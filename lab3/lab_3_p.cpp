#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	if(ceil(sqrt(n)) == floor(sqrt(n)) ){
		cout << "Yes";
	}else if(ceil(sqrt(n)) != floor(sqrt(n))){
		cout << "No";
	}
	
	
}


