#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(n==2){
            cout<<1<<endl;
            cout<<1<<" "<<5<<endl;
        }
        else{
            if(n%2==0){
                cout<<n/2<<endl;
                for(int i=1, j=n*3, k=1;k<=n/2; i+=3, j-=3, k++){
                    cout<<i<<" "<<j<<endl;
                }

            }
            else{
                cout<<n/2+1<<endl;
                int i, j, k;
                for(i=1, j=n*3, k=1;k<=n/2+1;i+=3, j-=3,k++){
                    cout<<i<<" "<<j<<endl;
                }

            }
        }
    }
}

