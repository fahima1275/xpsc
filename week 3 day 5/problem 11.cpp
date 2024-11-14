#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int n, k, q, ans=0, sum, c=0, x;
        cin>>n>>k>>q;
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        for(int i=0; i<n;i++){
            if(a[i]<=q){
                c++;
                if(i==n-1 || a[i+1]>q){
                    if(c>=k){
                        x=c-k+1;
                        sum=(x*(x+1))/2;
                        ans+=sum;
                    }
                    c=0;

                }

            }
        }
        cout<<ans<<endl;
    }
}
