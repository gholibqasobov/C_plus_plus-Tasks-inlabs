#include <iostream>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;


//void name(){	

//}

int main(){
	
	string str;
	
	while(cin >> str){
		int r = str.length();
		str.erase(remove(str.begin(), str.end(), '1'), str.end());
		str.erase(remove(str.begin(), str.end(), '2'), str.end());
		str.erase(remove(str.begin(), str.end(), '3'), str.end());
		str.erase(remove(str.begin(), str.end(), '4'), str.end());
		str.erase(remove(str.begin(), str.end(), '5'), str.end());
		str.erase(remove(str.begin(), str.end(), '6'), str.end());
		str.erase(remove(str.begin(), str.end(), '7'), str.end());
		str.erase(remove(str.begin(), str.end(), '8'), str.end());
		str.erase(remove(str.begin(), str.end(), '9'), str.end());
		str.erase(remove(str.begin(), str.end(), '0'), str.end());
		
		if(r == str.length()){
			cout << str << endl;
		}
	}
	
	
	
	return 0;
}



//for(int i = 0; i < n; i++){
//	
//}




//for(int i = 0; i < n; i++){
//	for(int j = 0; j < n; j++){
//		
//	}
//}


//reverse(s.begin(), s.end());

//sort(s.begin(), s.end());






