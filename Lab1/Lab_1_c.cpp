#include <iostream>
using namespace std;

int main() {
	int n;
	int rev=0;
	
	// revise
	
	cin>>n;
	
	if((n %  2) == 1){
		rev^=1;
	}
	
//	while(n>0){
//		
//		rev<<=1;
//		
//		if((n & 1) == 1){
//			rev^=1;
//		}
//		
//		n>>=1;
//	} 
	cout<<rev;
	
		
	return 0;
}


