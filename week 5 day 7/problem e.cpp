#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0, flag=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x==0){
                c++;
            }
            else if(x>=2){
                flag=1;
            }
        }
        if(c<=(n+1)/2){
            cout<<0<<endl;
        }
        else if(flag==1 || c==n){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }

    }

}

