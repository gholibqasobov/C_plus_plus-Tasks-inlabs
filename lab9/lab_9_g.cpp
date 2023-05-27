#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack <char> st;
    for(int i = 0; i < s.size(); i++) {
        if(!st.size()) {
            st.push(s[i]);
        } else if(st.top() == '1' && s[i] == '1'){
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    
    string t;
    while(st.size()) {
        t += st.top();
        st.pop();
    }

    for(int i = t.size() - 1; i >= 0; i--) {
        cout << t[i];
    }
}
