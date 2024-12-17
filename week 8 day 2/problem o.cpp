#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, c=0, flag=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++){
            if(a[i]==0 && a[i+1]==0){
                flag=1;
                break;
            }
            if(a[i]>=a[i+1]){
                a[i]=a[i]/2;
                c++;
                i=-1;
            }

        }
        if(flag==1){
            cout<<-1<<endl;
        }
        else{
            cout<<c<<endl;
        }

    }
}
