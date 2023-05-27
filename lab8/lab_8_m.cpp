
#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main(){
	set<int>s;
	int n, tmp, sum = 0;;
	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> tmp;
		s.insert(tmp);
	}
	
	 for(auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << ' ';
        
    }
    
	
	
}
