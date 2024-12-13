#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n, c=0, sum=0;
        int mx=INT_MIN;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            sum+=a[i];
            mx=max(mx, a[i]);
            if(sum-mx==mx){
                c++;
            }
        }
        cout<<c<<endl;
    }
}

