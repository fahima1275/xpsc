#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        map<int, int>mp;
        char c[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]>0){
                s+=c[mp[a[i]]-1];
            }
        }
        cout<<s<<endl;
    }
}
