#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, c1=0, flag=0;
        cin>>n;
        string a, b, c;
        cin>>a>>b>>c;
        for(int i=0; i<n; i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                c1++;
                if(c1>=1){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

