#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        if(x%3==0 && y%3==0){
            cout<<0<<endl;
        }
        else{
            cout<<x%3<<endl;
        }
    }

}
