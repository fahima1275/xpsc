#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, k, mn, c=0, c1=0, c2=0;
        char pos='-1';
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(auto u:mp){
            if(u.second%2!=0){
                c1++;
            }
        }
        if(c1<=(k+1)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}






