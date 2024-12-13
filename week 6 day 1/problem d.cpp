#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, c=0, c1=0, sum=0, pos;
        int mx=INT_MIN;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            sum=__gcd(sum, abs(a[i]-(i+1)));

        }
        cout<<sum<<endl;
    }
}

