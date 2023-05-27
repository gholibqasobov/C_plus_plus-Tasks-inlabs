#include <iostream>
#include <map>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	string s;
	map<string, int> str;
	for(int i =1;i <= n; i++){
		cin >>s;
		
		if(!str[s]){
			str[s] = i;
		}
		
		
	}
	
		for(auto &el:str){
			cout << el.first << ' ' << el.second << endl;
		}
	
	
}
