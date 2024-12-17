#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int c=0, mx=INT_MIN;
        char a[8][8];
        for(int i=0;i<8; i++){
            for(int j=0; j<8; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(a[i][j]=='R'){
                    c++;
                }
            }
            mx=max(mx, c);
            c=0;
        }
        if(mx==8){
            cout<<"R"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }

    }
}
