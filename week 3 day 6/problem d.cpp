#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector<string>v(t);
    string s, s1;
    int n;
    map<string, int>mp;
    for(int i=0; i<t; i++){
        cin>>v[i];
    }
    for(int i=t-1; i>=0; i--){
        mp[v[i]]++;
        if(mp[v[i]]==1){
            s=v[i];
            //cout<<s<<endl;
            n=s.size();
            s1+=s[n-2];
            s1+=s[n-1];
        }
    }
    cout<<s1<<endl;
}
