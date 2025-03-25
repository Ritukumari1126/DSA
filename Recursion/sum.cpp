#include<iostream>
using namespace std;

void sum(int s,int n){
    if(n==0){
        cout<<s;
        return;
    }

    sum(s+n,n-1);
}

int SUM(int n){
    if(n==0){
    
        return 0;
    }

    return n + SUM(n-1);
}

int main(){
    int s=0;
    cout<<SUM(7);
}