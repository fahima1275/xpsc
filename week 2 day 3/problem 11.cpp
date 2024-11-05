#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m,q;
        cin>>n>>m>>q;
        vector<int>a(m);
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        vector<int>b(q);
        for(int i=0; i<q; i++){
            cin>>b[i];
        }
        sort(a.begin(), a.end());
        for(int i=0; i<q; i++){
            if(b[i]<a[0]){
                cout<<a[0]-1<<endl;
            }
            else if(b[i]>a[m-1]){
                cout<<n-a[m-1]<<endl;
            }
            else{
                long long int l=lower_bound(a.begin(),a.end(), b[i])-a.begin();
                long long int r=upper_bound(a.begin(), a.end(), b[i])-a.begin();
                if(l==r){
                    l--;
                }
                long long int d1=a[r]-b[i];
                long long int d2=b[i]-a[l];
                if(d1%2!=0 && d2%2!=0){
                    cout<<d1/2+d2/2+1<<endl;
                }
                else{
                    cout<<d1/2+d2/2<<endl;
                }
            }
        }
    }
}





 
