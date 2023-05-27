#include <iostream>
#include <algorithm>
using namespace std;

void firstAndLast(string s, char d){
	int first_index, second_index, t;
	first_index = s.find(d);
	reverse(s.begin(), s.end());
	t = s.find(d);
	second_index = s.length() - t - 1;
	
	if(first_index != second_index){
		cout << first_index <<' ' << second_index;
	} else cout << first_index;
}

int main(){
	string s;
	char d;
	cin >> s;
	cin >> d;
	firstAndLast(s, d);
}
