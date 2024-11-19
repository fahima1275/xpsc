#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, c=0, c1=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i++){
            if(s[i]=='0' && s[i+1]=='1'){
                c++;
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                c1++;
            }
        }
        cout<<max(c, c1)<<endl;
    }
}
