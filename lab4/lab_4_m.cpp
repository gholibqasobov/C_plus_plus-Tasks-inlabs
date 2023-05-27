#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m,k,l=2,point_v=0,point_h=0,score=1;
    cin>>n;
    m=2*n-1;
    k=n;
    string direction="right";
    long long arr[n][n];


    for(int g=0;g<m;g++){
        
        if(l==3){
            l=1;
            n--;
        }
        if(direction=="right"){
            for(int p=0;p<n;point_h++,score++,p++){
                arr[point_v][point_h]=score;
            }
            point_h--;
            direction="down";
            point_v++;
    
        }
    
        else if(direction=="down"){
            
            for(int k=0;k<n;point_v++,score++,k++){
                arr[point_v][point_h]=score;
                
            }
            point_v--;
            direction="left";
            point_h--;

        }
        else if(direction=="left"){
            
            for(int r=0;r<n;point_h--,score++,r++){
                arr[point_v][point_h]=score;
                
            }
            point_v--;
            point_h++;
            direction="up";
        }
        
        else{
            for(int e=0;e<n;point_v--,score++,e++){
                arr[point_v][point_h]=score;
                
            }
            point_v++;
            direction="right";
            point_h++;
        }
        l++;
        
    }
    for(int i=0;i<k;i++){
        for(int g=0;g<k;g++){
            
            cout<<arr[i][g]<<" ";
        }
        cout<<endl;
    }
    
}
