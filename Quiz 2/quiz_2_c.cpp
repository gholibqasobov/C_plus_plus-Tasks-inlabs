//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	
//	int n;
//	
//	int arr[n];
//	
//	cin >> n;
//	
//	for(int i = 0; i < n; i++){
//		cin >> arr[i];
//	}
//	
//	sort(arr, arr + n);
//	int j = 0, k = 0;
//	ll int even[n];
//	ll int odd[n];
//	for(int i = 0; i < n; i++){
//		if(arr[i] % 2 == 0){
//			even[j] = arr[i];
//			j++;
//		} else{
//			odd[k] = arr[i];
//			k++;
//		}
//	}
//	
//	
//	for(int i = 0; i < j; i++){
//		cout << even[i] << ' ';
//	}
//	
//	for(int i = 0; i < k; i++){
//		cout << odd[i] << ' ';
//	}
//	
//	
//	
//	
//}

#include <iostream>

using namespace std;

int main(){
    int n, k = 0, p = 0;
    
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    // for(int i = 0; i < n; i++){
    //     if(arr[i] % 2 == 0){
    //         k++;
    //     }
    // }
    
    // p = n - k;
    
    int arr_even[n];
    int arr_odd[n];
    
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            arr_even[k] = arr[i];
            k++;
        } else{
            arr_odd[p] = arr[i];
            p++;
        }
    }
    
    for(int i = 0; i < k; i++){
        cout << arr_even[i] << ' ';
    }
    
    for(int i = 0 ;i < p; i++){
        cout << arr_odd[i] << ' ';
    }
    
    // 2 4 4 2 345 1 3 3 1 345
    
    
    
    
}s

























