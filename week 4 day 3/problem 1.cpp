#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, s, l=0, r=0, ans=0, sum=0;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    while(r<n){
        sum+=a[r];
        if(sum<=s){
            ans=max(ans, r-l+1);
        }
        else{
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
}

