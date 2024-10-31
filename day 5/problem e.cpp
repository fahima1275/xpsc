#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t, sum=0;
    cin>>a>>b>>t;
    float t1=t+0.5;
    for(int i=a; i<=t1; i+=a){
        sum=sum+b;
    }
    cout<<sum<<endl;

}
