#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,s=0, d=0, c=0;
    cin>>t;
    int a[t];
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
    for(int i=0, j=0; i<t;j++){
        if(j%2==0){
            if(a[i]>=a[t-1]){
                s+=a[i];
                i++;
            }
            else{
                s+=a[t-1];
                t--;
            }
        }
        else{
            if(a[i]>=a[t-1]){
                d+=a[i];
                i++;
            }
            else{
                d+=a[t-1];
                t--;
            }
        }

    }
    cout<<s<<" "<<d<<endl;


}
