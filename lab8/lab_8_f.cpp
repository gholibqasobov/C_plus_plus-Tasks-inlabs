#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insert(int n){
    int tmp;
    int l, r;
    vector <int> arrs;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        arrs.push_back(tmp);
    }
    
    cin >> l >> r;
    
    arrs.insert(arrs.begin() + l, r);
    // int p = n - (l + r);
    
    for(int i = 0; i < arrs.size(); i++){
        cout << arrs[i] << ' ';
    }
}

int main(){
    
    int n;
    
    cin >> n;
    
    insert(n);
    
    
}
