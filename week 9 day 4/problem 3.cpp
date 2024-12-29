#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;

    long long int lcm=(a/__gcd(a, b))*b;
    long long int x=(n/a)*p, y=(n/b)*q, z=(n/lcm);
    long long int ans=((x+y)-(z*(p+q)))+(z*max(p, q));

    cout<<ans<<endl;
}
