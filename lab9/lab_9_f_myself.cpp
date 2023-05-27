#include <iostream>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    bool p = true;
    // if(s[0] == ')' or s[s.length()] == '('){
        // cout << "NO";
    // }
    for(int i = 0;i < s.length(); i++){
        if(s[i] == ')' and s[i - 1] == '('){
            s.erase(s.begin() + i -1, s.begin() + i + 1);
        }
    }
    // cout << s << endl; 
    if(s.size() != 0){
        cout << "NO";
    } else cout << "YES";
    
    
    
}
