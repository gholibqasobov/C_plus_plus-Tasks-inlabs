#include <bits/stdc++.h>

using namespace std;

void toK_inary(int n, int k){
	int r, t, j = 0;
	
	t = n;
	char s[1000];
	while(t > 0){
		r = t % k;
		if(r < 10){
			s[j++] = 48+r;
		} else
			s[j++] = 55 + r;
		t /= k;
	}
	
	for(int i = j - 1; i >= 0; i--){
		cout << s[i];
	}
	
}

int main(){
	
	int n, k;
	
	cin >> n >> k;
	
	toK_inary(n, k);
	
}
