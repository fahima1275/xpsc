#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m,q, c=0, ans;
        cin>>n;
        map<int,int>mp;
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a, a+n);
        for(int i=0; i<n;i++){
            if(mp[a[i]]>0){
                mp[a[i]]--;
                ans=a[i]+1;
                while(mp[ans]>0){
                    mp[ans]--;
                    ans++;
                }
                c++;
            }
        }
        cout<<c<<endl;

    }
}







