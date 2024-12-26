#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k, c=0, flag=0, flag1=0, last=-1;
        cin>>n;

        string s;
        cin>>s;
        for(int i=0; i<n-1; i++){
            if(s[i]=='p'){
                flag=1;
            }
        }
        for(int i=1; i<n; i++){
            if(s[i]=='s'){
                flag1=1;
            }
        }
        if(flag==1 && flag1==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}

