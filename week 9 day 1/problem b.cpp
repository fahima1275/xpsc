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
        int m=n*4;
        int c1=0, c2=0, c3=0, c4=0;
        for(int i=0; i<m; i++){
            if(s[i]=='A'&& c1<n){
                c1++;
            }
            else if(s[i]=='B'&& c2<n){
                c2++;
            }
            else if(s[i]=='C'&& c3<n){
                c3++;
            }
            else if(s[i]=='D'&& c4<n){
                c4++;
            }

        }
        cout<<c1+c2+c3+c4<<endl;
    }

}
