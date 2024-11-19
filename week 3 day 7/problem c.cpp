#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        set<int>s;
        for(int i=0; i<n;i++){
            cin>>a[i];
            if(a[i]!=0){
            s.insert(a[i]);
            }
        }
        if(s.size()>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

}
