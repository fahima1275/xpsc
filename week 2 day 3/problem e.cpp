#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0;i<n; i++){
            int b;
            cin>>b;
            string s;
            cin>>s;
            for(int j=0; j<b; j++){
                if(s[j]=='D'&& a[i]<9){
                    a[i]=a[i]+1;
                    //cout<<a[i]<<" ";
                }
                else if(s[j]=='D' && a[i]==9){
                    a[i]=0;
                }
                if(s[j]=='U' && a[i]>0){
                    a[i]=a[i]-1;
                }
                else if(s[j]=='U' && a[i]==0){
                    a[i]=9;
                }
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}






