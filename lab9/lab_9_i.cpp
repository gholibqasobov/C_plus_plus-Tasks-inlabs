#include <iostream>
#include <map>
using namespace std;

int main(){
	
	int n;
	cin >>n;
	string s;
	map<string, bool> user;
	
	for(int i =0;i < n; i++){
		cin >> s;
		
		if(!user[s]){
			cout << "new user added" << endl;
			user[s] = true;
		} else cout << "user already exists" << endl;
		
		
		
	}
	
	
	
}
