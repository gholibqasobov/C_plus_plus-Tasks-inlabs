#include <iostream>

using namespace std;

void strToBool(string s){
    if(s.size() == 1){
        if(s[0] == 48){
            cout << "false";
        } else if(s[0] == 49){
            cout << "true";
        }
    }else{
        for(int i = 0;i < s.length(); i++){
            cout << s[i];
        }
    }
}


int main(){
    string s;
    cin >> s;
    strToBool(s);
    
}
