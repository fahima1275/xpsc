#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s, s1;
        cin>>s;
        int c=0, c1=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='b'){
                c++;
            }
            else if(s[i]=='B'){
                c1++;
            }
            else if(s[i]=='a' || (s[i]>='c' && s[i]<='z')){
                if(c>0){
                    c--;
                }
                else{
                    s1+=s[i];
                }
            }
            else if(s[i]=='A' || (s[i]>='C' && s[i]<='Z')){
                if(c1>0){
                    c1--;
                }
                else{
                    s1+=s[i];
                }
            }
        }
        reverse(s1.begin(), s1.end());
        cout<<s1<<endl;
    }


}
