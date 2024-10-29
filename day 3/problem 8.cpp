#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin>>n>>m;
    string s1,s2, s3, s4;
    pair<string,string>p[n];
    for(int i=0; i<n; i++){
        cin>>p[i].first>>p[i].second;
    }
    for(int i=0; i<m;i++){
        cin>>s1>>s2;
        for(int j=0;j<s2.size()-1; j++){
            s3+=s2[j];
        }
         //cout<<s3<<endl;
        for(int k=0; k<n;k++){
            if(p[k].second==s3){
                cout<<s1<<" "<<s2<<" "<<"#"<<p[k].first<<endl;
                break;

            }
        }
        s3="";
    }


}

