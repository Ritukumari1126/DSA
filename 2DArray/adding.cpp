#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1;
    cout<<"enter row and col ";
    cin>>r1>>c1;
    int A[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
            cout<<endl;
        }
    }

    int r2,c2;
    cout<<"enter row and col ";
    cin>>r2>>c2;
    int B[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
            cout<<endl;
        }
    }

    int ans[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            int value = 0;
            for(int k=0;k<r2;k++){
                value += A[i][k]*B[k][j];
            }

            ans[i][j] = value;
        }
    }

    //for printing

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}