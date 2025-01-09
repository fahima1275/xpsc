#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int>v;
        while(n){
            v.push_back((n+1)/2);
            n/=2;
        }
        int sum=0, pow1=1;
        for(int u:v){
            if(sum<k && k<=sum+u){
                cout<<pow1*(2*(k-sum)-1)<<endl;
                break;
            }
            sum+=u;
            pow1*=2;
        }
    }
}
