#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	vector<int>arrs;
	int tmp;
	for(int i = 0;i < n; i++){
		cin >> tmp;
		arrs.push_back(tmp);
	}
	vector<int>even_arrs;
	vector<int>odd_arrs;
	for(int i =0 ;i < arrs.size(); i++){
		if(arrs[i] % 2 == 0){
			even_arrs.push_back(arrs[i]);
		} else{
			odd_arrs.push_back(arrs[i]);
		}
	}
	
	sort(even_arrs.begin(), even_arrs.end(), greater<int>());
	sort(odd_arrs.begin(), odd_arrs.end());
	for(int i =0;i < even_arrs.size(); i++){
		tmp = even_arrs[i];
		cout << tmp << ' ';
	}
	
	for(int i =0;i < odd_arrs.size(); i++){
		tmp = odd_arrs[i];
		cout << tmp << ' ';
	}
	
	
}
