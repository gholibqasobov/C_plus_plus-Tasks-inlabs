//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void IsPrime(int n){
    vector<int> arrs;
    int tmp, k, count = 0;
    
    for(int i = 0; i < n ;i++){
        cin >> tmp;
        
        arrs.push_back(tmp);
    }
    cin >> k;
    
    for(int i = 0; i < n; i++){
        for(int j = 2; j < sqrt(arrs[i]); ++i){
            if(arrs[i]%j != 0 && arrs[i] > k){
                count++;
            }
        }
    
    }   
        cout << count;
}


int main(){
    
    int n;
    
    cin >> n;
    
    IsPrime(n);
    
    
    
}
