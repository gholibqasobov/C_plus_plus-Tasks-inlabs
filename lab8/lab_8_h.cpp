#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,k, tmp;
	cin >> n;
	vector<int> arrs;
	for(int i = 0;i < n; i++){
		cin >> tmp;
		arrs.push_back(tmp);
	}
	
	cin >> k;
	
	sort(arrs.begin(), arrs.end());
	
	for(int i= 0;i < k;i++){
		cout << arrs[i] << ' ';
	}
	
}
