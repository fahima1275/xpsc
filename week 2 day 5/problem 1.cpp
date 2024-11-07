#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        int n, q;
        cin>>n>>q;
        int a[n];
        int c[n];
        set<int>s;
        for(int i=0; i<n;i++){
            cin>>a[i];

        }
        for(int i=n-1; i>=0;i--){
            s.insert(a[i]);
            c[i+1]=s.size();
            //cout<<c[i]<<endl;

        }
        for(int i=1; i<=q; i++){
            int p;
            cin>>p;
            cout<<c[p]<<endl;
        }



}
