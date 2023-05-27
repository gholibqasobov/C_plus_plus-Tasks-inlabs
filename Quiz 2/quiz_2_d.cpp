//#include <iostream>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//void ListMode(int n){
//    
//    int s[n];
//    int freq[1000] = {1};
//    
//    for(int i = 0;i < n; i++){
//        cin >> s[i];
//    }
//    
//    sort(s, s+n);
//    for(int i = 0;i < n; i++){
//        cout << s[i] << ' ';
//    }
//    
//    for(int i = 0;i < n;i++){
//        freq[s[i]]++;
//    }
//    
//     for(int i = 0; i < 1000; i++)
//    {
//        if(freq[i] != 0)
//        {
//          cout<<"The frequency of "<<s[i]<<" is "<<freq[i]<<endl;
//        }
//    }
//    
//    
//    
//    
//    
//}
//
//int main(){
//    
//    int n;
//    cin >> n;
//    ListMode(n);
//    
//
//   
//    
//    
//}






#include <iostream>

#include <algorithm>

using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	int arr[n];
	
	for(int i= 0;i < n; i++){
		cin >> arr[i];
	}
	
	int freq[n] = {0};
	
	sort(arr, arr + n);
	
	for(int i =0 ;i < n; i++){
		for(int j = 0; j < n ;j++){
			if(arr[i] == arr[j]){
				freq[i]++;
			}
		}
	}
	
	int max = INT8_MIN;
	
	for(int i = 0;i < n; i++){
		if(freq[i] >= max){
			max = freq[i];
		}
	}
	
	for(int i = n - 1; i >= 0; --i){
		if(max == freq[i] && arr[i] != arr[i- 1]){
			cout << arr[i] << ' '; 
		}
	}
}
