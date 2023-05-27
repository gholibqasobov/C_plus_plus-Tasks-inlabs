#include <bits/stdc++.h>

using namespace std;

bool DoesExist(int n){
    vector<int> arrs;
    int tmp, k;
    for(int i = 0;i  < n;i++){
        cin >> tmp;
        arrs.push_back(tmp);
    }
    cin >> k;
    
    for(int i= 0;i < arrs.size(); i++){
        if(arrs[i] == k){
            return true;
            break;
        } 
    }
    
    return false;
}

int main(){
    
    int n;
    cin >> n;
    
    bool p = DoesExist(n);
    
    if(p){
        cout << "Yes";
    } else cout << "No";
    
    
    
}
