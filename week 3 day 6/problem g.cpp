#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int c=0, c1=0;
        string s1, s2;
        cin>>s1>>s2;
        if(s1==s2){
            cout<<"="<<endl;
        }
        else if(s1[s1.size()-1]=='S' && s2[s2.size()-1]=='M'){
            cout<<"<"<<endl;
        }
        else if(s1[s1.size()-1]=='M' && s2[s2.size()-1]=='S'){
            cout<<">"<<endl;
        }
        else if(s1[s1.size()-1]=='M' && s2[s2.size()-1]=='L'){
            cout<<"<"<<endl;
        }
        else if(s2[s2.size()-1]=='M' && s1[s1.size()-1]=='L'){
            cout<<">"<<endl;
        }
        else if(s1[s1.size()-1]=='L' && s2[s2.size()-1]=='S'){
            cout<<">"<<endl;
        }
        else if(s1[s1.size()-1]=='S' && s2[s2.size()-1]=='L'){
            cout<<"<"<<endl;
        }
        else if(s1[s1.size()-1] =='S'&&s2[s2.size()-1]=='S'){
            for(int i=0; i<s1.size(); i++){
                if(s1[i]=='X'){
                    c++;
                }
            }
            for(int i=0; i<s2.size(); i++){
                if(s2[i]=='X'){
                    c1++;
                }
            }
            if(c>c1){
                cout<<"<"<<endl;
            }
            else{
                cout<<">"<<endl;
            }
        }
        else if(s1[s1.size()-1] =='L'&&s2[s2.size()-1]=='L'){
            for(int i=0; i<s1.size(); i++){
                if(s1[i]=='X'){
                    c++;
                }
            }
            for(int i=0; i<s2.size(); i++){
                if(s2[i]=='X'){
                    c1++;
                }
            }
            if(c>c1){
                cout<<">"<<endl;
            }
            else{
                cout<<"<"<<endl;
            }
        }


    }

}
