#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int mn=INT_MAX;
        for(int i=0; i<n; i++){
            int m=0;
            if(i+1<n){
                m=max(m, abs(a[i+1]-a[i]));
            }
                if(i-1>=0){
                    m=max(m, abs(a[i-1]-a[i]));
                }
                mn=min(mn, m);

        }
        cout<<mn<<endl;
    }
}
