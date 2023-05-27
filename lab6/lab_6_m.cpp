//#include <iostream>
//
//using namespace std;
//
//int main(){
//	
//	int n , m;
//	
//	cin >> n >> m;
//	
//	int arr[n][m];	
//	
//	long int t_arr[m][n];
//	
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			cin >> arr[i][j];
//		}
//	}
//	
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			t_arr[i][j] = arr[j][i];
//		}
//	}
//	
//	for(int i = 0; i < m; i++){
//		for(int j = 0; j < n; j++){
//			cout << arr[j][i] << " ";
//		}
//		
//		cout << endl;
//	}
//	
//	
//	return 0;
//}




#include<bits/stdc++.h>
using namespace std;

int main(){
    // Defining dimensions of the original matrix.
    int N, M;
	cin >> N >> M;
	int mat[N][M];
    // Declaring it & Initializing values. 
   	for(int i = 0; i < N; i++){
   		for(int j = 0; j < M; j++){
   			cin >> mat[i][j];
		   }
	   }

    int T_mat[M][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            T_mat[j][i] = mat[i][j];
        }
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout<<T_mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
