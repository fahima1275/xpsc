#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n, sum=0, mx=INT_MIN;
        cin>>n;
        long long int a[n];
        map<long long int, long long int>mp;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
            mx=max(mx, mp[a[i]]);
        }
        long long int d=n-mx;
        if(d==0){
            cout<<0<<endl;
        }
        else{
            while(mx<n){
                sum++;
                mx*=2;
            }
            cout<<sum+d<<endl;
        }

    }

}

