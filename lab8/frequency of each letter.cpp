#include <iostream>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	
	int freq[256] = {0};
	int n;
	cin >> n;
	char letters[n];
	for(int i =0;i < n; i++){
		cin >> letters[i];
	}
	
	
	for(int i =0;i < s.length(); i++){
		if(s[i] != ' '){
			freq[s[i]]++;
		}
	}
	
	for(int i = 0;i < 256; i++){
		for(int j = 0; j < n; j++){
			if(freq[i] != 0 and char(i) == letters[j]){
				cout << char(i) << " - " << freq[i] << endl;
			} else if(freq[letters[j]] == 0 and letters[j] == char(i)){
				cout << letters[j] << " - " << 0 << endl;
			}
		}
	}
}
