#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<string>v(n);

    string s;

    int flag=0;
    for(int i=0; i<n; i++){
        cin>>v[i];

    }
    cout<<"NO"<<endl;
    for(int i=1; i<n;i++){
        for(int j=i-1; j>=0; j--){
            if(v[i]!=v[j]){
                flag=1;
            }
            else{
                flag=0;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
    }

}

