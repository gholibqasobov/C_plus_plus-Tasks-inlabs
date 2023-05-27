//#include <iostream>
//using namespace std;
//int main(){
//	int zp, fi=0, counter=1;
//	cin >> zp;
//	
//	fi = fi + (zp*0.3);
//	
//	while(fi<500000){
//		zp= zp + (zp*0.1);
//		fi= fi + (zp*0.3);
//		counter +=1;
//	}
//	cout << counter;
//	
//}

#include <iostream>
using namespace std;
int main(){
	int zp, fi=0, counter=1;
	cin >> zp;
	
	fi = fi + (zp*0.3);
	
	while(fi<500000){
		zp= zp + (zp*0.1);
		fi= fi + (zp*0.3);
		counter +=1;
	}
	cout << counter;
	
}
