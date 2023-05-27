#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int a,b,k;
	cin >> a >> b >> k;
 
	int count = 0;
 
  for(int i = min(a,b);1<=i;i--){
		if((a%i) == 0 && (b%i) == 0) count++;
 
		if(count == k){
			cout << i << endl;
			return 0;
		}
	}
}
