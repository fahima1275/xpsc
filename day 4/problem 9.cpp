#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> mp;
    int n;
    cin >> n;
    vector<string>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=n-1;i>=0; i--){
        mp[v[i]]++;
        if(mp[v[i]]==1){
            cout<<v[i]<<endl;
        }
    }

}

