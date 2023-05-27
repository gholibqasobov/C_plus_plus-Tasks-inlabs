#include <bits/stdc++.h>

using namespace std;

void isPowTwo(int n){
	int i = 0;
	bool p = false;
	while(pow(2, i) <= n){
		if(pow(2, i) == n){
			p = true;
			break;
		} else p = false;
		
		i++;
	}
	
	if(p) cout << "Yes";
	else cout << "No";
	
	
}

int main(){
	
	int n;
	
	cin >> n;
	
	isPowTwo(n);
	
}
