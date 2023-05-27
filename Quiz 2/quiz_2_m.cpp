//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//void power(int a, int b){
//	int k = 0;
//	bool p = false;
//	
//	float n1 = b/a;
//	
//	if(n1 == 1){
//		p = true;
//	} else if (n1 > 1){
//		for(int i = 0; i <= 60; i++){
//			if(pow(2, i) == n1){
//				p = true;
//				k = i;
//			}
//		}
//	} else if(n1 < 1){
//		n1 = a/b;
//		for(int i = 0;i  <= 60; i++){
//			if(pow(2, i) == n1){
//				p = true;
//				k = -i;
//			}
//		}
//	}
//	
//	if(p){
//		cout << "YES " << k;
//		
//	} else cout << "NO";
//	
//	
//}
//
//int main(){
//	int a, b;
//	
//	cin >> a >> b;
//	
//	power(a, b);
//	
//	
//	
//}


#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b;
	cin >> a >> b;
	int n = b/a;
	bool p = true;
	for(int i = -60; i <=60; i++){
		if(pow(2, i) == n){
			p = true;
			cout << "YES " << i;
			break; 
		}
	}
	
	
}
