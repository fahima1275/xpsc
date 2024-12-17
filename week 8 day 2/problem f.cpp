#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, c=0, flag=0, first=-1, last=-1;
        cin>>n;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(flag==1){
                if(x>=last && x<=first){
                    last=x;
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            else{
                if(first==-1){
                    first=x;
                    last=x;
                    cout<<1;
                }
                else if(x>=last){
                    last=x;
                    cout<<1;
                }
                else if(first>=x){
                    last=x;
                    flag=1;
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<endl;

    }
}
