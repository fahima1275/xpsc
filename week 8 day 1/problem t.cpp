#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='*'){
                    for(int k=i+1; k<n; k++){
                        if(a[k][j]=='.'){
                            a[k][j]='*';
                            a[i][j]='.';
                            break;
                        }
                        else if(a[k][j]=='o'){
                            break;
                        }
                    }
                }
            }
        }
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}
