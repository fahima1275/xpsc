#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, k=0;
        cin>>n;
        int m=n-1;
        int a[n][m];
        vector<int>v(n);
        map<int, int>mp;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int j=0; j<n-m; j++){
            for(int i=0; i<n; i++){
                mp[a[i][j]]++;

            }


        }
        for(auto u:mp){
            if(u.second>1){
                v[k]=u.first;
            }
            else{
                v[k+1]=u.first;
            }
        }
        //cout<<v[0]<<" "<<v[1]<<endl;
        k+=2;

        for(int j=1; j<m-1; j++){
            for(int i=0; i<n; i++){
                mp[a[i][j]]++;
                if(mp[a[i][j]]>1 && a[i][j]!=v[k-1]){
                    v[k]=a[i][j];
                    break;
                }
            }
            k++;
        }
        for(int j=m-1; j<m; j++){
            for(int i=0; i<n; i++){
                mp[a[i][j]]++;
                if(mp[a[i][j]]>1 && a[i][j]!=v[k-1]){
                    v[k]=a[i][j];
                }
            }

        }
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<endl;

    }

}
