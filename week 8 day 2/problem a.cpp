#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, c1=0, c2=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                c1++;
            }
            else{
                c2++;
            }
        }
        int mn=min(c1, c2);
        if(mn%2==0){
            cout<<"Ramos"<<endl;
        }
        else{
            cout<<"Zlatan"<<endl;
        }

    }
}
