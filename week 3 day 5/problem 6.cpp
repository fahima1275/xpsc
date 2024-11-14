#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l=0, r=0, ans=INT_MAX, c=0;
        while(r<n){
            if(s[r]=='W'){
                c++;
            }
            if(r-l+1==k){
                ans=min(ans, c);
                if(s[l]=='W'){
                    c--;
                }
                l++;
                r++;
            }
            else{
                r++;
            }
        }
        cout<<ans<<endl;
    }
}


