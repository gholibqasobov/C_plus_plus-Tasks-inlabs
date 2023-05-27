#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool IsReverse(int n){
    int k = 0,j = 0;
    string tmp;
    string arr[n];
    string left_arr[n/2];
    string right_arr[n/2];
    int right_int_arr[n/2];
    int left_int_arr[n/2];
    
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0;i < n/2; i++){
        left_arr[j] = arr[i];
        j++;
    }
    
    for(int i = j; i < n; i++){
        right_arr[k] = arr[i];
        k++;
    }
    

    for(int i = 0; i < n/2; i++){
        tmp = right_arr[i];
        reverse(tmp.begin(), tmp.end());
        
        right_arr[i] = tmp;
    }
    tmp = ' ';
    
    reverse(right_arr, right_arr + n/2);
    
    for(int i = 0; i < n/2 ; i++){
        tmp = right_arr[i];
        right_int_arr[i] = stoi(tmp);
    }
    tmp = ' ';
    
    for(int i = 0; i < n/2; i++){
        tmp = left_arr[i];
        left_int_arr[i] = stoi(tmp);
        
    }
    
    tmp = ' ';
    for(int i = 0; i < n/2; i++){
        if(right_int_arr[i] != left_int_arr[i]){
            return false;
            break;
        } else return true;
    }
    
}

int main(){
    int n;
        
    cin >> n;
    
    
    bool p = IsReverse(n);
    if(p){
        cout << "YES";
    } else cout << "NO";
    
    
    
    
}
