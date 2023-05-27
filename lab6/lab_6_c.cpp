//#include<iostream>
//
//using namespace std;
//
//int main()
//{
////   int arr1[10], arr2[10], arr3[10], i, j, k=0, x, tot;
//	int n, m;
//	int tot, k = 0, x;
//	
//	cin >> n;
//	int arr1[n];
//	
//	for(int i = 0; i < n; i++){
//		cin >> n;
//	}
//	
//	int arr2[m], arr3[n + m];
//	
//	cin >> m;
//
//	for(int i = 0; i < m; i++){
//		cin >> m;
//	}
//
//   // Finding and storing common elements
//   for(int i=0; i<n; i++)
//   {
//      for(int j=0; j<m; j++)
//      {
//         if(arr1[i]==arr2[j])
//         {
//            tot = 0;
//            for(x=0; x<k; x++)
//            {
//               if(arr1[i]==arr3[x])
//                  tot++;
//            }
//            if(tot==0)
//            {
//               arr3[k] = arr1[i];
//               k++;
//            }
//         }
//      }
//   }
//
//   // Printing common elements
//   cout<<"\nCommon Elements are:\n";
//   for(int i=0; i<k; i++)
//      cout<<arr3[i]<<" ";
//
//   cout<<endl;
//   return 0;
//}

//#include <iostream>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(){
//	
//	int n, m;
//	
//	cin >> n;
//	
//	int arr1[n];
//	
//	for(int i = 0; i < n; i++){
//		cin >> arr1[i];
//	}
//	
//	cin >> m;
//	int arr2[m];
//	
//	for(int i = 0; i < m; i++){
//		cin >> arr2[i];
//	}
//	int count = 0;
//	
//	sort(arr1, arr1 + n);
//	sort(arr2, arr2 + m);
//	
//	
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < n; j++){
//			if(arr1[i] == arr2[j]){
//				count++;
////				arr1[i + 1];
////				arr2[j + 1];
//			}
//		}
//	}
//	
//	
//	
//	cout << count;
//	
//	
//	
//	
//	
//}













#include <iostream>
#include <algorithm>
using namespace std;

void printTwoDimensionalArray(int arr[][2], int n){
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < 2; j ++){
            cout << arr[i][j] << " ";
            if (j == 1){
                cout << endl;
            }
        }
    }
}

int takeSmaller(int a, int b){
    if (a > b){
        return b;
    }
    else{
        return a;
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
     }
}

void createArray(int arr[], int n){
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }
}

int countUnique(int arr[], int n){
    int unique = 1;
    if (n == 1){
        return unique;
    }
    else{
        for (int i = 1; i < n; i ++){
            if (arr[i] > arr[i - 1]){
                unique ++;
            }
        }
        return unique;
    }
}

void fillFinalArray(int arr[], int final[][2], int n){
    final[0][0] = arr[0];
    final[0][1] = 1;

    if (n > 1){
        int pointer = 0;
        for (int i = 1; i < n ; i ++){
            if (arr[i] > final[pointer][0]){
                pointer ++;
                final[pointer][0] = arr[i];
                final[pointer][1] = 1;
            }
            else{
                final[pointer][1] ++;
            }
        }
    }
}

int findPointer(int finalA[][2], int finalB[][2], int n, int m){
    int pointer = 0;
    for (int i = 0; i < m; i ++){
        if (finalB[i][0] == finalA[0][0]){
            pointer = i;
            break;
        }
    }
    return pointer;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];

    createArray(a, n);
    createArray(b, n);

    sort(a, a + n);
    sort(b, b + n);

    int uniqueCountA = countUnique(a, n);
    int uniqueCountB = countUnique(b, n);

    int finalA[uniqueCountA][2];
    int finalB[uniqueCountB][2];

    fillFinalArray(a, finalA, n);
    fillFinalArray(b, finalB, n);


    if (a[0] > b[n-1] || b[0] > a[n-1]){
        cout << 0;
    }
   
    else{
        if (finalA[0][0] > finalB[0][0]){
            int count = 0;
            int start = findPointer(finalA, finalB, uniqueCountA, uniqueCountB);
            for (int i = start; i < uniqueCountB; i ++){
                for (int j = 0; j < uniqueCountA; i ++){
                    if (finalB[i][0] == finalA[j][0]){
                        count += takeSmaller(finalB[i][1], finalA[j][1]);
                    }
                }
            }
            cout << count;
        }
         
        else{
            int count = 0;
            int start = findPointer(finalB, finalA, uniqueCountB, uniqueCountA);
            for (int i = start; i < uniqueCountA; i ++){
                for (int j = 0; j < uniqueCountB; j ++){
                    if (finalA[i][0] == finalB[j][0]){
                        count += takeSmaller(finalA[i][1], finalB[j][1]);
                    }
                }
            }
            cout << count;
        }
    }
   
}	















