#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string, long long>mp;
        map<char, long long>mp1,mp2;

        long long ans = 0;

        for(long long i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            //cout<<mp1[s[0]]<<" "<<mp2[s[1]]<<endl;
            long long p = mp1[s[0]]+mp2[s[1]];
            long long q = mp[s];
            //cout<<p<<" "<<q;

            ans += (p-(2*q));

            mp1[s[0]]++;
            mp2[s[1]]++;
            mp[s]++;
        }

        cout<<ans<<endl;
    }
}

