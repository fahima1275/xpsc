#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, c=0, flag=0;
    cin>>s>>t;

    for(int i=0;i<=100 ; i++){
        for(int j=0; j<=100; j++){
            for(int k=0;k<=100 ;k++){
                if(i*j*k<=t && i+j+k<=s){
                    c++;
                }

            }
        }
    }
    cout<<c<<endl;

}
