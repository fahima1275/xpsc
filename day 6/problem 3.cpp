#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, c=0;
    cin>>t;
    vector<string>v;
    string s;
    cin.ignore();
    map<string, int>mp;
    for(int i=0;i<t; i++){
        getline(cin,s);
        v.push_back(s);
    }
    for(int i=0;i<v.size(); i++){
        mp[v[i]]++;
        if(mp[v[i]]==1){
            c++;
        }
    }
    cout<<c<<endl;


}
