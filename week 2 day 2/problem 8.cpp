#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){

        long long int n, sum=0, m;
        cin>>n;
        int a[n];
        priority_queue<int>pq;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]!=0){
                pq.push(a[i]);
            }
            else if(a[i]==0 && !pq.empty()){
                m=pq.top();
                sum+=m;
                pq.pop();
            }
        }

        cout<<sum<<endl;


    }
}

