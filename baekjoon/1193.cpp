/******************************************************************************
https://www.acmicpc.net/problem/1193
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    cin>> n; 
    
    while(n-i>0){
        n-=i;
        i++;
        
    }
        if(i%2!=0){
            cout<<i+1-n<<"/"<<n;
        }else{
            cout<<n<<"/"<<i+1-n;
        }

    }
