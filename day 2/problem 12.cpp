#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        set<char>s;
        int n;
        cin>>n;
        string s1, s2, s3;
        cin>>s1;
        for(int i=0; i<n;i++){
            s.insert(s1[i]);
        }
        for(auto u:s){
            s2+=u;
        }
        for(int i=0; i<n; i++){
            int d=s2.find(s1[i]);
            //cout<<d<<endl;
            s3+=s2[s2.size()-d-1];
            //cout<<s3;
        }
        cout<<s3<<endl;


    }
}
