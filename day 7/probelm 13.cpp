#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, mx=INT_MIN;
    cin>>n;
    int a[n];
    map<int, int>mp;
    for(int i=0; i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto u:mp){
        mx=max(mx, u.second);
    }
    cout<<mx<<endl;


}
