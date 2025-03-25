#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subset2(string ans, string original, vector<string> &v,bool flag){
    if(original.length() == 0){
        v.push_back(ans);
        return;
    }

    char ch = original[0];
    if(original.length() == 1){
        if(flag==true){
            subset2(ans+ch,original.substr(1),v,true);
            subset2(ans,original.substr(1),v,true);
        }
        return;
    }

    char dh = original[1];
    if(ch==dh){
        if(flag==true){
            subset2(ans+ch,original.substr(1),v,true);
            subset2(ans,original.substr(1),v,false);
        
        }
    }
    else{
        if(flag==true){
            subset2(ans+ch,original.substr(1),v,true);
            subset2(ans,original.substr(1),v,true);
        }

    }
}

int main(){
    string str = "aab";
    vector<string> v;
    subset2(" ",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}