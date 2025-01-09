#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        vector<int>b(n), v1(n);
        vector<pair<int,int>>v;

        for(int i=0; i<n; i++){
            cin>>a[i];
            v.push_back({a[i], i});
        }
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        sort(b.begin(), b.end());

        int i=0;
        for(auto u:v){
            v1[u.second]=b[i];
            i++;
        }
        for(auto u:v1){
            cout<<u<<" ";
        }
        cout<<endl;

    }
}

