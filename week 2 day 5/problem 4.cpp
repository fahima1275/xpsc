#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        int a[n];
        map<int, set<int>>mp;
        for(int i=0; i<n;i++){
            cin>>a[i];
            mp[a[i]].insert(i+1);
        }
//        for(auto u:mp){
//            cout<<u.first<<" ";
//            set<int>s=u.second;
//            for(auto v:s){
//                cout<<v<<" ";
//            }
//            cout<<endl;
//        }
        for(int j=0; j<q; j++){
            int l, r;
            cin>>l>>r;
            if((mp.find(l)==mp.end())|| (mp.find(r)==mp.end())){
                cout<<"NO"<<endl;
            }
            else{
                int index1, index2;
                index1=*mp[l].begin();
                index2=*mp[r].rbegin();
                if(index1<index2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}
