#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k, pos;
        cin>>n>>k;
        vector<int>v;
        if(k!=0){
            v.push_back(1);
            for(int i=1; i<n;i++){
                k--;
                if(k==0){
                    v.push_back(n);
                    pos=i;
                    break;
                }
                else{
                    v.push_back(i+1);
                }
            }
            for(int i=n-1; i>=pos+1; i--){
                v.push_back(i);
            }
            for(auto u:v){
                cout<<u<<" ";
            }
            cout<<endl;

        }
        else{
            for(int i=n; i>=1;i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
}

