#include<iostream>
using namespace std;

void generate(string s,int op,int cl,int n){
    if(cl == n){
        cout<<s<<endl;
        return ;
    }

    if(op<n){
        generate(s+'(',op+1,cl,n);
    }

    if(cl<op){
        generate(s+')',op,cl+1,n);
    }

}

int main(){
    string s = "";
    int n = 3;
    generate(" ",0,0,n);
}