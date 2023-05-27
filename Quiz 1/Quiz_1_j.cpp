#include <iostream>

using namespace std;

int main(){
	int a, b, c, costa, costb, costc, money;
	
	cin >> a >> b >> c >> costa >> costb >> costc >> money;
	
	if((a * costa) + (b * costb) + (c * costc) <= money){
		cout << "Yes";
	}else
		cout << "No";
	
	
	return 0;
}
