#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, int> mp;
    int n;
    cin >> n;
    while (n--)
    {
        string s1;
        cin >> s1;
        mp[s1]++;
        if(mp[s1]==1){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s1<<mp[s1]-1<<endl;
        }
    }


}
