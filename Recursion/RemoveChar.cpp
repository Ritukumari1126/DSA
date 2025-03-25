#include<iostream>
using namespace std;

void RemoveChar(string ans,string original){
    if(original.length() == 0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch == 'o'){
        RemoveChar(ans,original.substr(1));
    }
    else{
        RemoveChar(ans+ch,original.substr(1));
    }
}

void removeChar(string s,string str, int idx){
    if(idx == str.length()){
        cout<<s<<endl;
        return;
    }
    char ch = str[idx];
    if(ch == 'a'){
        removeChar(s,str,idx+1);
    }
    else{
        removeChar(s+ch,str,idx+1);
    }
}

int main(){
    string str = "ritu poddar";
    string strr = "abhinav";
    RemoveChar(" ",str);
    removeChar(" ",strr,0);

}