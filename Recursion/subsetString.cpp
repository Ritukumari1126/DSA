#include<bits/stdc++.h>

using namespace std;
#include<string>
#include<vector>

void printSubset(string ans , string original){
    if(original.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = original[0];
    printSubset(ans+ch,original.substr(1));
    printSubset(ans,original.substr(1));
}

void storeSubset(string ans,string s,int idx, vector<string> &v){
    if(idx == s.length()){
        v.push_back(ans);
        return;
    }

    char ch = s[idx];
    storeSubset(ans,s,idx+1,v);
    storeSubset(ans+ch,s,idx+1,v);
}



int main(){
    string str = "abc";
    printSubset(" ",str);
    string s = "abcd";
    vector<string> v;
    storeSubset(" ",s,0,v);
    for(string ele: v){
        cout<<ele<<endl;
    }

}
