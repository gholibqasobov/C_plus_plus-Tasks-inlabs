#include <iostream>
#include <map>
#include <vector>
using namespace std;

int MoreThanTwice(vector<int>arrs){
	map<int, int>freq;
	for(int i = 0;i < arrs.size(); i++){
		freq[arrs[i]]++;
	}
	int count = 0;
	for(auto t : freq){
		if(t.second >= 2){
			count++;
		}
	}
	
	return count;
	
}

int main(){
	int n;
	cin >> n;
	vector<int>arrs;
	for(int i =0;i <  n; i++){
		int tmp;
		cin >> tmp;
		arrs.push_back(tmp);
	}
	
	cout << MoreThanTwice(arrs);
	
}
