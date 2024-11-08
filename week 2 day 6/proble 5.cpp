#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q, pos=1;
    cin>>q;
    set<pair<int,int>>s;
    multiset<pair<int, int>>ml;
    vector<int>v;
    for(int i=1; i<=q;i++){
        int n;
        cin>>n;
        if(n==1){
            int m;
            cin>>m;
            s.insert({pos, m});
            ml.insert({m, -pos});
            pos++;
        }
        else if(n==2){

            v.push_back(s.begin()->first);
            ml.erase({s.begin()->second, -s.begin()->first});
            s.erase(s.begin());

        }
        else{
            v.push_back(-ml.rbegin()->second);
            s.erase({-ml.rbegin()->second, ml.rbegin()->first});
            ml.erase(--ml.end());


        }
    }
    for(auto u:v){
        cout<<u<<" ";
    }
    cout<<endl;
}

