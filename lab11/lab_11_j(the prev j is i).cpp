#include <bits/stdc++.h>
using namespace std;


int main()
{
    multimap <double, pair<int,int>> m;
    int x_0,y_0,n;cin >> x_0 >> y_0 >> n;
    for (int i = 0; i < n; i++)
    {
        int x,y; cin >> x >> y;
        double dis = sqrt( pow(x-x_0,2) + pow (y-y_0,2) ) ;
        m.insert({dis,make_pair(x,y)});
    }
    for(auto& s : m){
        auto k = s.second;
        cout << k.first << " " << k.second << endl;
    }
    
   


    return 0;
}
