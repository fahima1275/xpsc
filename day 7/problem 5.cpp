#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n, c1=0;
        cin>>n;
        vector<vector<string>>v(3, vector<string>(n));
        map<string,int>mp;
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                cin>>v[i][j];
                mp[v[i][j]]++;
            }
        }
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                if(mp[v[i][j]]==1){
                    c1+=3;
                }
                if(mp[v[i][j]]==2){
                    c1+=1;
                }
            }
            cout<<c1<<" ";
            c1=0;
        }
        cout<<endl;



    }
}
