#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <pair>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<pair<string,int>> t;
	for(int i = 0;i < n; i++){
		string s; int n; cin >> s >> n;
		t.push_back(make_pair(s,n));
	}
	
	sort(t.begin(), t.end());
	
	for(auto i:t){
		cout << i.first << ' ' << i.second << endl;
	}
	
	
}
