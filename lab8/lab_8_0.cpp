// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
using namespace std;
int main() {
   
   set<string>s;
   
   string str, tmp;
   cin >> str;
   
   for(int i = 0;i < str.length(); i++){
       if(str[i] >= 65 and str[i] <= 90){
           str[i] += 32;
       }
       
       tmp = str[i];
       s.insert(tmp);
       
       
   }
   
   cout << s.size() << endl;
   for(auto i : s){
       cout << i << ' ';
       
   }
   
   

    return 0;
}
