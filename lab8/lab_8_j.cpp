#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	int n, tmp;
	cin >> n;
	vector<int> arrs;
	for(int i = 0;i < n; i++){
		cin >> tmp;
		arrs.push_back(tmp);
	}
	
	int max = arrs[0];
	int d;
	for(int i = 0;i < n; i++){
		for(int j =0;j < n; j++){
			d = arrs[i]	- arrs[j];
			if(d > max){
				max = d;
			}
		}
	}
	
	cout << max;
	
	
	return 0;
	
	
	
	
	
}
