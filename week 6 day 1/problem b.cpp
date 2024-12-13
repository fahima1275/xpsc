#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x, y, n1;
        cin>>x>>y;
        if(y%2==0){
            n1=y/2;
        }
        else{
            n1=y/2+1;
        }
        int n2=n1*15;
        int n3=n2-(y*4);
        if(x<=n3){
            cout<<n1<<endl;
        }
        else{
            x=x-n3;
            if(x%15==0){
                cout<<n1+(x/15)<<endl;
            }
            else{
                cout<<n1+(x/15)+1<<endl;
            }
        }
    }
}

