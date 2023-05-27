#include <bits/stdc++.h>
using namespace std;
 
int getSum(string str)
{
    int sum = 0;
 
    for (int i = 0; i < str.length(); i++) {
        sum = sum + str[i] - 48;
    }
    return sum;
}
 
int main(){
    string st;
    int n;
    cin >> n;
    string str[n];
    for (int i=0; i <n; i++){
    	cin >> str[i];
	}
	
	for (int i=0; i<n;i++){
		if (getSum(str[i]) %2==0){
    		cout << "Sum of digits is even!" << endl;
		}
		else{
			cout << "Sum of digits is odd!" << endl;
		}
	}
    return 0;
}
