#include <iostream>

using namespace std;
int main(){
    int x, s = 0;
    while(cin >> x){
        s += x;
    if(cin.get() == '\n')break;
    }
    cout << s;
    
    return 0;
}
