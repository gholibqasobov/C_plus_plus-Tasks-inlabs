#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string str){
	int n = str.length();
	
	for(int i = 0 ;i < n/2; i++){
		if(str[i] != str[n - i - 1]){
			return false;
		}
	}
	
	return true;
}



int maxLengthNotPalindrome(string str, int n){

	char d = str[0];
	int i = 1;
	
	for(i = 1;i <= n; i++){
		if(str[i] != d){
			break;
		}
	}
		
		if(i == n){
			return 0;
		}
		
	
		
		if(isPalindrome(str)){
			return n - 1;
		}
		
		return n;
// 	}

}




int main(){
	string str;
	
	cin >> str;
	
	cout << maxLengthNotPalindrome(str, str.length());
	
	
	
	
}
