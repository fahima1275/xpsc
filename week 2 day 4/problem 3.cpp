#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m,q, c=0, ans;
        cin>>n;
        map<int,int>mp;
        priority_queue<int>pq;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto u:mp){
            pq.push(u.second);
        }
        while(!pq.empty()){
            if(pq.size()<2){
                break;
            }
            else{
                int x, y;
                x=pq.top();
                pq.pop();
                y=pq.top();
                pq.pop();
                x--;
                y--;
                if(x>=1){
                    pq.push(x);
                }
                if(y>=1){
                    pq.push(y);
                }
            }
        }
        if(pq.empty()){
            cout<<0<<endl;
        }
        else{
            while(!pq.empty()){
                c+=pq.top();
                pq.pop();
            }
            cout<<c<<endl;
        }

    }
}







