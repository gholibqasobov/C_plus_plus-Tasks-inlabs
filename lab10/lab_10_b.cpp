#include <bits/stdc++.h>
using namespace std;

long long gen(){
    static long long i = -1;++i;
    long long res = 437893890380859375;
    if(i == 15){
        return res;
    }else{
        return pow(i,i);
    }
    
    
}
void PRINT_EL(long long el){
    cout << el << " ";
}
int main()
{
    int n; cin >> n;n++;
    long long a[n];
    void(*pnt)(long long) = PRINT_EL;
    generate(a,a+n,gen);
    for_each(a,a+n,pnt);
    
    
    
   
    return 0;
}
