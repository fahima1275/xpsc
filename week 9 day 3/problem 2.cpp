#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        long long int g1=0, g2=0;
        for(int i=0; i<n; i+=2){
            g1=__gcd(g1, a[i]);
        }
        for(int i=1; i<n; i+=2){
            g2=__gcd(g2, a[i]);
        }
        long long ans=0;
        int flag=0;
        for(int i=1; i<n; i+=2){
            if(a[i]%g1==0){
                flag=1;
            }
        }
        if(flag==0){
            ans=g1;
        }
        else{
            flag=0;
            for(int i=0; i<n; i+=2){
                if(a[i]%g2==0){
                    flag=1;
                }
            }
            if(flag==0){
                ans=g2;
            }
        }
        cout<<ans<<endl;
    }
}
