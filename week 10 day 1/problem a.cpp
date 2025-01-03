#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, s1,s2, s3;
    cin>>s;
    int n=s.size();
    map<char, int>mp;
    int m=0, k=n-1, c=0;
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    for(auto u:mp){
        if(u.second%2!=0){
            c++;
        }
    }
    if(n%2!=0 && c==1){

        for(auto u:mp){
            if(u.second%2==0){
                for(int i=0; i<(u.second/2); i++){
                    s1+=u.first;


                }
                s2=s1;
            }
            else{
                for(int i=0; i<u.second; i++){
                    s3+=u.first;
                }
            }
        }
        s1+=s3;


        reverse(s2.begin(), s2.end());

        cout<<s1+s2<<endl;


    }
    else if(n%2==0 && c==0){
        for(auto u:mp){
                for(int i=0; i<(u.second/2); i++){
                    s1+=u.first;


                }
                 s2=s1;


        }
        reverse(s2.begin(), s2.end());

        cout<<s1+s2<<endl;
    }
    else{
        cout<<"NO SOLUTION"<<endl;
    }

}

