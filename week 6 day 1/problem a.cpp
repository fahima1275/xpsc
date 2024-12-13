#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, pos=-1, flag=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++){
            if(a[i]>a[i+1]){


                pos=i;
                break;
            }
        }
        for(int i=pos+1; i<n-1; i++){
            if(a[i]>a[i+1]){

                flag=1;

            }
        }
        if(pos!=-1){
        if(a[n-1]>a[0]){
            flag=1;
        }
        }
        if(flag==1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}
