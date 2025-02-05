#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n, c1=0, c2=0, ans;
        cin>>n;
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];

        }
        for(int i=0; i<n;i++){
            if(a[i]==0){
                c1++;
            }
            else if(a[i]==1){
                c2++;
            }

        }
       // cout<<(1LL<<c1)<<endl;
        ans=pow(2, c1);
        cout<<ans*c2<<endl;
    }
}
