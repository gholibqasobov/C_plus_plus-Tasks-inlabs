#include <iostream>

using namespace std;

int main(){
	
	int n, temp, i , j, flag = 0;

	cin >> n;
	
	for(j = 2; j <= n; j++){
		temp = j;
		flag = 1;
		
		for(i = 2; i <= temp/2; i++){
			if(temp % i == 0){
				flag = 0;
				break;
			} else
				flag = 1;
		}
		
		if(flag == 1){
			cout << temp << " is prime" << endl;
		} else
			continue;
	}
	
	
	return 0;
}
