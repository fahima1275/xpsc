#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, pos, flag=0;
    cin>>a>>b>>c;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            pos=i;
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<pos<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}
