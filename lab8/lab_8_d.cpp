#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(int n){
    int tmp;
    int l;
    vector <int> arrs;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        arrs.push_back(tmp);
    }
    
    cin >> l;
    
    arrs.erase(arrs.begin() + l, arrs.begin() + l + 1);
    for(int i = 0; i < n -1; i++){
        cout << arrs[i] << ' ';
    }
}

int main(){
    
    int n;
    
    cin >> n;
    
    reverse(n);
    
    
}
