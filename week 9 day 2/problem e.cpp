#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k, c=1, flag=0, flag1=0, last=-1;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
        }
        else{
            int sum=1;
            while(sum<n){
                sum=(sum+1)*2;
                 c++;
            }
            cout<<c<<endl;
        }

    }
}

