#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int>v;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        v.push_back(a[n-1]);
        for(int i=n-2; i>=0;i--){
            if(a[i]>v.back()){
                v.push_back(a[i]%10);
                v.push_back(a[i]/10);
            }
            else{
                v.push_back(a[i]);
            }
        }


        if(is_sorted(v.rbegin(), v.rend())){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
