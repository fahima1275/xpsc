#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int t1=(a&b);
        cout<<(a^t1)+(b^t1)<<endl;
    }
}

