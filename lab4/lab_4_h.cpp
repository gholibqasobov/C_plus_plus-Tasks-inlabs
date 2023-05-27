#include <iostream>
using namespace std;
int main () {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int b[n];
    for (int i = 0; i < n; i++){
        b[i] = 0;
        for (int j = 0; j < m; j++){
            b[i] += a[i][j];
        }
    }
 int min = 9999999;
 int pos;
 for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        if(min > b[i]){
            min = b[i];
            pos = i;

        }
    }
  
 }  
     cout << pos + 1;    
        
}
