#include <iostream>
#include <map>

using namespace std;

int main(){
	
	int n;
	
	cin >> n;
	
	map<string, int> films;
	
	for(int i =0;i < n; i++){
		string s;
		int n;
		cin >> s >> n;
		
		if(!films[s]){
			films[s] = n;
		} else{
			films[s] += n;
		}
		
	}
	
	for(auto &el : films){
		cout << el.first << ' ' << el.second << endl;
	}
	
}
