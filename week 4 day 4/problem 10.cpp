#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k, l=0, r=0, ans=0;
    cin>>n>>k;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    multiset<long long int>ml;
    while(r<n){
        ml.insert(a[r]);
        long long int mn=*ml.begin();
        long long int mx=*ml.rbegin();
        if(mx-mn<=k){
            ans+=(r-l+1);
        }
        else{
            while(l<=r){
                mn=*ml.begin();
                mx=*ml.rbegin();
                if(mx-mn<=k){
                    break;
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn==*ml.begin();
            mx=*ml.rbegin();
            if(mx-mn<=k){
                ans+=(r-l+1);
            }

        }
        r++;
    }
    cout<<ans<<endl;
}

