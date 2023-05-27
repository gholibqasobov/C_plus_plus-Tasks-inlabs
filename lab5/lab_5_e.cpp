//#include <iostream>
//
//using namespace std;
//
//int main(){
//	
//	long int n;
//	
//	int r, i = 0, s1 = 0, s2 = 0;
//	
//	cin >> n;
//	
//	while(n > 0){
//		r = n % 10;
//		i++;
//		if(i % 2 == 0){
//			s1 += r;
//		} else
//			s2 += r;
//			
//		n /= 10;
//		
//	}
//	
//	if(s1 == s2){
//		cout << "YES";
//	} else 
//		cout << "NO";	
//	
//	
//	
//	
//	return 0;
//}


#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	
	string n;
	
	cin >> n;
	
	int odd = 0, even = 0;
	
	for(int i = 0; i < n.size(); i++){
		if(i % 2 == 0){
			even += n[i];
		} else odd += n[i];
	}
	
	if(even == odd)
		cout << "YES";
	else cout << "NO";
	
	
	
	return 0;
}
