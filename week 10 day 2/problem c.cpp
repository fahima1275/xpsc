#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int c=0, flag=0, sum=0;
    int l=0, r=0;
    while(r<n){
        sum+=a[r];
        if(sum==s){
            c++;
        }
        else{
            while(sum>s && l<=r){
                sum-=a[l];
                l++;

                flag=1;
            }
            if(flag==1 && sum==s){
                c++;
                flag=0;
            }
        }
        r++;
    }
    cout<<c<<endl;
}
