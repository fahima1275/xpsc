#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<string, string>mp, mp1;
    for(int i=0; i<n;i++){
        string a, b;
        cin>>a>>b;
        if(mp1.find(a)!=mp1.end()){
            string s=mp1[a];
            mp[s]=b;
            mp1.erase(a);
            mp1[b]=s;
        }
        else{
            mp[a]=b;
            mp1[b]=a;
        }

    }
    cout<<mp.size()<<endl;
    for(auto u:mp){
            cout<<u.first<<" "<<u.second<<endl;
        }
}
