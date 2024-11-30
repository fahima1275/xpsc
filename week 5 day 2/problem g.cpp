#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1=s;
        reverse(s.begin(), s.end());
        if(s>=s1){
            cout<<s1<<endl;
        }
        else{
            cout<<s+s1<<endl;
        }
    }
}

