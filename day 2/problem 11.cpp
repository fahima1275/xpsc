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
        int pos, c=0;

        for(int i=0; i<s.size(); i++){
            if(s[i]==s[i+1]){
                if(s[i]=='z'){
                    s1+=s[i];
                    s1+='a';
                    pos=i;
                    c=1;

                    break;
                }
                else{
                    s1+=s[i];
                    s1+=s[i]+1;
                    pos=i;
                    c=1;
                    break;
                }
            }
            else{
                s1+=s[i];
            }
        }
        if(c==1){
        for(int i=pos+1; i<s.size(); i++){
            s1+=s[i];
        }
        cout<<s1<<endl;
        }
        else{
            if(s[s.size()-1]=='z'){

                s1+='y';
                //s1+=s[0];
                cout<<s1<<endl;
            }
            else{

                s1+=s[s.size()-1]+1;
                cout<<s1<<endl;
            }
            }
        }

    }
