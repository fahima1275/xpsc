#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, pos, c=0, flag=0;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1; i>=0; i--){
            mp[a[i]]++;
            if(mp[a[i]]>1){
                pos=i;
                flag=1;
                break;
            }
        }
        if(flag==1){
        for(int i=0;i<=pos; i++){
            c++;
        }
        cout<<c<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

}

