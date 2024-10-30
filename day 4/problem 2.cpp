#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
       int n, c=0, pos, pos1;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0; i<n;i++){
        if(s[i]=='B'){
            pos=i;
            break;
        }
       }
       for(int i=n-1; i>=0;i--){
        if(s[i]=='B'){
            pos1=i;
            break;
        }
       }
       for(int i=pos; i<=pos1;i++){
        c++;
       }
       cout<<c<<endl;


    }


}
