#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n, c=0, c1=0, sum=0, pos;
        int mx=INT_MIN;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++){
            if(a[i]>0){
                pos=i;
                break;
            }
            else{
                c1++;
            }
        }
        for(int i=pos; i<n-1; i++){
            if(a[i]==0){
                c++;
            }
            else{
                sum=sum+a[i];
            }
        }
        if(c1==n-1){
            cout<<0<<endl;
        }
        else{
        cout<<sum+c<<endl;
        }
    }
}

