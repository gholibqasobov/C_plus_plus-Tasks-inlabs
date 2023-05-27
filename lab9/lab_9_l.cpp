#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	pair<int, int> arrs[555];
	
	for(int i =0;i < n ; i++){
		int x, y; cin >> x >> y;
		arrs[i].first = x + y;
		arrs[i].second = i + 1;
		
	}
	
	sort(arrs, arrs + n);
	
	for(int i = 0;i < n; i++){
		cout << arrs[i].second << ' ';	
	}
	
	
	
	
	
}
