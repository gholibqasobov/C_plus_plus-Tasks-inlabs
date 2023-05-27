#include <iostream>
#include <map>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	map<string, string> user_login;
	for(int i = 0;i < n;i++){
		string user, password;
		cin >> user >> password;
		
		user_login[user] = password;
	}
	
	int k;
	cin >> k;
	
	for(int i = 0;i < k; i++){
		string user, password;
		cin >> user >> password;

		if(user_login[user].empty()){
			cout << "login error" << endl;
		} else if(user_login[user] != password){
			cout << "password error" << endl;
		} else cout << "correct password" << endl;
	}
	
	
	
	
}
