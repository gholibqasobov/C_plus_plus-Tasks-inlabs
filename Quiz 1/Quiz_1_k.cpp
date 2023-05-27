#include <iostream>

using namespace std;

int main()
{
    int n, k = 1;
    cin >> n;
    
    while (n>0){

        if (k % 2 != 0 && k% 7 !=0){
            n= n +3;}
        if (k%2 == 0 && k % 7 != 0){
            n = n -4;}
        
                
        k++;
    }
    cout << k;

    return 0;
}
