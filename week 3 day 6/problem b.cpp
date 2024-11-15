#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(n==3){
            cout<<0<<endl;
        }
        else{
            sort(a, a+n);
            int p1=a[n-1]-a[2];
            int p2=a[n-3]-a[0];
            int p3=a[n-2]-a[1];
            int mn=min(p1,p2);
            cout<<min(mn, p3)<<endl;
        }
    }
}
