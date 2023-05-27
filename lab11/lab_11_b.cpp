#include <iostream>
#include <set>
using namespace std;

int main(){
	set<string> arrs;
	
	int n;
	cin >> n;
	
	for(int i =0 ;i < n; i++){
		string tmp;
		cin >> tmp;
		
		arrs.insert(tmp);
		
	}
	
	if(arrs.size() == n){
		cout << "YES";
	} else cout << "NO";
	
	
}
