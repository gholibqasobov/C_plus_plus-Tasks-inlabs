#include <iostream>
using namespace std;


void PaintedArea(int w, int h, int n){
    int i, j, m, c = 0;
	int a[h][w];
    int b[n][4];
    
    for(i=0; i<n; i++){
    	for(j=0; j<4; j++){
    		cin >> b[i][j];
		}
	}
    
    for(i=0; i<h; i++){
    	for(j=0; j<w; j++){
    		a[i][j]=0;
		}
	}
	
	for(m=0; m<n; m++){
		for(int i=b[m][0]; i<b[m][2]; i++){
			for(int j=b[m][1]; j<b[m][3]; j++){
				a[i][j]=1;
			}
		}
	}
	
	
	for(i=0; i<h; i++){
		for(j=0; j<w; j++){
			if(a[i][j]==0){
				c++;
			}
		}
	}
	
	cout << c;
}

int main(){
	int w, h, n;
    cin >> w >> h >> n;
    PaintedArea(w, h, n);
    
}
