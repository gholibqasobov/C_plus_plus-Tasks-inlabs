#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort(int n){
    int tmp;
    vector <int> arrs;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        arrs.push_back(tmp);
    }
    
    sort(arrs.begin(), arrs.end());
    for(int i = 0; i < n; i++){
        cout << arrs[i] << ' ';
    }
}

int main(){
    
    int n;
    
    cin >> n;
    
    sort(n);
    
    
}
