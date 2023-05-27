#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        int l = s.length();
        s.erase(remove(s.begin(), s.end(), '1'), s.end());
        s.erase(remove(s.begin(), s.end(),'2'), s.end());
        s.erase(remove(s.begin(), s.end(), '3'), s.end());
        s.erase(remove(s.begin(), s.end(), '4'), s.end());
        s.erase(remove(s.begin(), s.end(), '5'), s.end());
        s.erase(remove(s.begin(), s.end(), '6'), s.end());
        s.erase(remove(s.begin(), s.end(), '7'), s.end());
        s.erase(remove(s.begin(), s.end(), '8'), s.end());
        s.erase(remove(s.begin(), s.end(), '9'), s.end());
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        
        if(l == s.length()){
            cout << s << endl;
        } 
    }
    
    
    
}
