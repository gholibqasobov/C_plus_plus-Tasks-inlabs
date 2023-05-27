#include<iostream>

using namespace std;
 
int main(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	for(int i = 0; i < str.length();i++) {
		str[i] = char((str[i] - 'A' + n) % 26 + 65);
	}
 
	cout<<str;
 
	return 0;
}
