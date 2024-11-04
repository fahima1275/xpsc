#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n, c=0;
        cin>>n;
        string s, s1;
        cin>>s;
        s1="Timur";
        sort(s1.begin(), s1.end());
        sort(s.begin(), s.end());
        if(s==s1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}







