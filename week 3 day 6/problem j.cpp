#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, m, mx=INT_MIN, sum=0;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                for(int k=i, l=j; k<n && l<m; k++, l++){
                    sum+=a[k][l];
                }
                for(int k=i-1, l=j-1; k>=0 && l>=0; k--, l--){
                    sum+=a[k][l];
                }
                for(int k=i-1, l=j+1; k>=0 && l<m; k--, l++){
                    sum+=a[k][l];
                }
                for(int k=i+1, l=j-1; k<n && l>=0; k++, l--){
                    sum+=a[k][l];
                }
                mx=max(mx, sum);
                sum=0;
            }
        }
        cout<<mx<<endl;
    }
}

