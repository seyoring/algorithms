# https://www.acmicpc.net/problem/2775

#include <iostream>

using namespace std;

int main()
{
    int num;
    int floor[15][15];
    cin>>num;
    
    for(int i=1; i<15; i++){
        floor[0][i]=i;
    }
    
    for(int i=1; i<15; i++){
        for(int j=1; j<15; j++){
            if(j==1){ floor[i][1]=1; 
            }else floor[i][j]= floor[i-1][j]+floor[i][j-1];
        }
    }
    while(num--){
        int k,n;
        cin>>k>>n;
        cout<<floor[k][n]<<endl;
        }
    }
