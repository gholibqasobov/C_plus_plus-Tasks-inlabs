#include <iostream>

using namespace std;

int main(){
	
	long int n,l,r,sum=0;
cin>>n;cin>>l;cin>>r;
long int a[n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=l-1;i<=r-1;i++){

sum += a[i]; }
cout<<sum;
	
	
	
	return 0;
}
