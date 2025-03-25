#include<iostream>
using namespace std;

void print(int i,int n){
    if(i>n){
        return;
    }

    cout<<i<<endl;
    print(i+1,n);
}

void print1toN(int n){
    if(n<0){
        return;
    }
    print1toN(n-1);
    cout<<n<<endl;
}

int main(){
    int n=7;
    print(1,7);
    print1toN(10);
}