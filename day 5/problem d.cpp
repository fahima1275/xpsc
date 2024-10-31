#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, pos, flag=0;
    cin>>a;
    string s=to_string(a);
    string s1;
    int l=s.size();
    int l1=4-l;
    for(int i=1; i<=l1; i++){
        s1+='0';
    }
    s1+=s;
    cout<<s1<<endl;

}
