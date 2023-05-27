//#include <iostream>
//#include <cmath>
//using namespace std;

//int main(){
	
//	int n, N = 2, i;
//	int d;
//	cin >> n;
	
//	i = 2;
//	cout << 1 << ' ';
//	while(N <= n){
//		cout << N << ' ';
//		N = pow(i, 2);
//		i++;
//	}



//	i = n;
//	while(n >= 1){
//		
//		cout << N << ' ';
//		N = sqrt(i);
//		i--;
//	}


//	int arr[n];
//	for(i = n; i >= 1; i--){
//		arr[i] = pow(i, 2);
//	}
//
//	for(int i = 1; arr[i] <= n; i++){
//		cout << arr[i] << ' ';
//	}
//	cout << endl;
	
//	cout << "The inverse: ";
	
//	for(int j = n; j >= 1; j--){
//		cout << arr[j] << ' ';
//	}
	
	
	
//}



//
//#include <bits/stdc++.h>
//
//
//using namespace std;
//
//
//int main(){
//	
//	int l, n, N = 2;
//	int d;
//	cin >> l >> n >> d;
//	
//	int i;
//	
//	int arr[n];
////	string s;
//	int k = 0;
//		for(i = n; i >= l; i--){
//			arr[i] = pow(i, 2);
//		}
//		
//		for(int i = l; arr[i] <= n; i++){
//			k++;
//		}
//		
//		
//	if(d == 1){
//		
//		for(int i = l; arr[i] <= n; i++){
//			cout << arr[i] << ' ';
//
//		}
//	} else{
//		for(i = k; arr[i] >= l; i--){
//			
//			cout << arr[i] << ' ';
//		}
//		
////		cout << 2 << ' ' << 1 << ' ';
//
//		
//			
//		
//		
//		
//	}
//	
//	
//	
//	
//	
//	
//	
//	
//	
//	
//}




#include <bits/stdc++.h>

using namespace std;


void pow(int s, int e, int d){
    if(d == 1){
        for(int i = 0; i <= e; i++){
            if(pow(i, 2) >= s && pow(i, 2) <= e  ){
                cout << pow(i, 2) << ' ';
            }
        }
    } else if(d == -1){
        for(int i = e; i >= 0; i--){
            if(pow(i, 2) >= s && pow(i, 2) <= e  ){
                cout << pow(i, 2) << ' ';
            }
        }
    }
    
}

int main(){
    
    int s,e,d;
    
    cin >> s >> e >> d;
    
    // for(int i = 0; i <= e; i++){
    //     if(pow(i, 2) >= s && pow(i, 2) <= e  ){
    //         cout << pow(i, 2) << ' ';
    //     }
    // }
    
    pow(s, e ,d);
    
    
    
    
}
