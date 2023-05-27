//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main(){
//	
//	int n, tmp;
//	vector<int> s;
//	cin >> n;
//	for(int i = 0;i < n; i++){
//		cin >> tmp;
//		s.push_back(tmp);
//	}
//	
//	sort(s.begin(), s.end());
//	
//
//	for(int i =0; i < n ;i++){
//		for(int j = i+1;j < n; j++){
//			if(s[i] == s[j]){
//				while(j < n){
//					s[i] = s[j];
//					j++;
//				}
//				
//				n--;
//			} else continue;
//		}
//	}
//	
//
//// 	for(int i = 0;i < n;i++){
//// 		cout << s[i] << ' ';
//// 	}
//cout << n;
//	
//	
//}

#include <iostream>
#include <set>
using namespace std;

int main(){
	int n, tmp;
	cin >> n;
	set<int>s1;
	
	for(int i = 0;i < n; i++){
		cin >> tmp;
		s1.insert(tmp);
	}
	
	int size = s1.size();
	cout << size;

		
	
}
