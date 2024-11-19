#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long int n, m, k, sum=0;
        cin>>n>>m>>k;
        vector<long long int>v;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        long long int b[m];
        for(int i=0; i<m; i++){
            cin>>b[i];
            long long int a1=b[i]*k;
            v.push_back(a1);
        }
        sort(a, a+n, greater<long long int>());
        sort(v.begin(), v.end(), greater<long long int>());
        for(int i=0, j=0; i<n && j<v.size(); i++, j++){
            if(a[i]>=v[j]){
                sum+=v[j];
            }
            else{
                sum+=a[i];
            }
        }
        cout<<sum<<endl;


    }

}
