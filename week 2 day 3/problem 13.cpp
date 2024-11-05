#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m,i=0;
        cin>>n>>m;
        string s;
        cin>>s;
        int a[m];
        set<int>s2;
        for(int i=0;i<m; i++){
            cin>>a[i];
            s2.insert(a[i]);
        }
        string s1;
        cin>>s1;
        sort(s1.begin(), s1.end());
        for(auto u:s2){
            s[u-1]=s1[i];
            i++;
        }
        cout<<s<<endl;
    }
}
