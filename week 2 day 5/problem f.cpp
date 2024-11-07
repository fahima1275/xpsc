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
        cin>>n;
        string s, t;
        cin>>s>>t;
        for(int i=0; i<n; i++){
            if(s[i]=='R' && t[i]=='B' || s[i]=='R' && t[i]=='G'){
                c++;
            }
            else if(s[i]=='G' && t[i]=='R' || s[i]=='B' && t[i]=='R'){
                c++;
            }
        }
        if(c>0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


    }
}






