#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, s1;
    cin>>s;
    char i, pos;
    int j, flag=0;
    map<char,int>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    for(auto u:mp){
        s1+=u.first;
    }
    for(i='a', j=0; i<='z'; i++, j++){
        if(i!=s1[j]){
            pos=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<pos<<endl;
    }
    else{
        cout<<"None"<<endl;
    }


}

