#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n, sum=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
        for(int i=0; i<n-2; i++){
            sum+=a[i];
        }
        cout<<a[n-1]-a[n-2]+sum<<endl;
    }

}

