#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void sortArray(vector<pair<int, int>>coordinates){
	sort(coordinates.begin(), coordinates.end());
	
	
	for(int i = 0; i < coordinates.size(); i++){
	    cout << coordinates[i].first << ' ' << coordinates[i].second << endl;
	}
}

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>> coordinates;
	int x, y;
	
	for(int i = 0;i < n; i++){
		cin >> x >> y;
		
		coordinates.emplace_back(x, y);
	}
	
	sortArray(coordinates);
	
	
}

