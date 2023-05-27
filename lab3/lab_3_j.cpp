#include <iostream>

using namespace std;

int main(){
	int n,i,t=0, pos=0,newn; cin>>n;
int a[n];
cin>>newn;
for(i=0;i<n;i++){ cin>>a[i];
} for(i=0;i<n;i++){
if(newn >= a[i]){ pos = i;
}
}
cout<<pos + 1;
	
	
	return 0;
}
