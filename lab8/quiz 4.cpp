#include <bits/stdc++.h>
#include <algorithm>
//#include <itera>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<pair<string, string>>students;
	string name, surname;
	
	for(int i = 0;i < n; i++){
		cin >> name >> surname;
		students.push_back(make_pair(name, surname));
	}

	sort(students.begin(), students.end());
	
	vector<pair<string, string>>::iterator it = students.begin();
	
	for( ; it != students.end(); it++){
		cout << it->first<<' ' < it -> second << endl;
	}
	
	return 0;
	
}
