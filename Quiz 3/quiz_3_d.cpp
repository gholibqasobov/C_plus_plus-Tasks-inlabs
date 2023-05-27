#include <bits/stdc++.h>

using namespace std;

void dexToHex(int n){
	int r, j = 0;

	char s[1000];
	while(n > 0){
		r = n % 16;
		if(r < 10){
			s[j++] = 48+r;
		} else
			s[j++] = 55 + r;
		n /= 16;
	}
	
	for(int i = j - 1; i >= 0; i--){
		cout << s[i];
	}
	
}

int main(){
	
	int n;
	
	cin >> n;
	
	dexToHex(n);
	
}
