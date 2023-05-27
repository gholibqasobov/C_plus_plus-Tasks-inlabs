#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void sumOfK(int n){
	int tmp, k;
	vector<int> arrs;
	for(int i = 0;i < n; i++){
		cin >> tmp;
		arrs.push_back(tmp);
	}
	
	cin >> k;

	sort(arrs.begin(), arrs.end(), greater<int>());
	int sum = 0;
	for(int i= 0;i < k;i++){
		sum += arrs[i];
	}
	
	cout << sum;
}

int main(){
	int n;
	cin >> n;
	sumOfK(n);
	
}
