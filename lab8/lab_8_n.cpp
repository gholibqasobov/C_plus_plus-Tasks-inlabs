// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
using namespace std;
int main() {
   
   int n, tmp;
   cin >> n;
   set<int>s;
   
   for(int i = 0;i < n; i++){
       cin >> tmp;
       s.insert(tmp);
   }
   
   for(auto i : s){
       tmp = i;
       if(tmp % 2 != 0){
           cout << tmp << ' ';
       }
   }
   
   
   
   

    return 0;
}
