#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
//
int main(){ 
	int n, m, i, k;
	cin >> n;
	int arr1[n];
	
//	int mergedArray[50];
	
	for(i= 0; i<n;i++){
		cin>>arr1[i];
//		mergedArray[i] = arr1[i];
	}
	
//	k=i;
	
	cin >> m;
	
	//int arr2[m];
	
	for(k=0;k<m;k++){
		cin>>arr1[i];
//		arr1[i] = arr2[k];
		i++;
	}
	i +=1;
	sort(arr1, arr1 + i);
	for(k = 0;k<i; k++){
		cout << arr1[k] << " ";
	}
	
	
	
	
	
	return 0;
//	
}






