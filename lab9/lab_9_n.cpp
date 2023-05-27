#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> num;
	
	for(int i= 0;i < n; i++){
		int tmp;
		cin >> tmp;
		
		num.push_back(tmp);
	}
	
	
	int cnt = 0;
	for(int i =0;i < n; i++){
		for(int j = 1; j < n;j++){
			if(i < j and j <= n and (num[i] ^ num[j]) ){
				cnt = num[i];
			}
		}
	}
	cout << cnt;
	
}
