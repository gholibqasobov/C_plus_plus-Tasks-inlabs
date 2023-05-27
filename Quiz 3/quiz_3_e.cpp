#include <iostream>
#include <algorithm>
using namespace std;

int numSum(string s){
	string d;
	int sum = 0;
	for(int i = 0;i < s.length(); i++){
		if(s[i] >= 48 && s[i] <= 57){
			d = s[i];
			sum += atoi(d.c_str());
		}
	}
	return sum;
}

int main(){
	string s;
	cin >> s;
	int sum = numSum(s);
	cout << sum;

}
