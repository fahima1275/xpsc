#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, pos, flag=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int XOR=0;
        for(int i=0; i<256; i++){
            XOR=a[0]^i;
            for(int j=1; j<n; j++){
                XOR^=(a[j]^i);
                //cout<<XOR<<" "<<i<<endl;

            }
            if(XOR==0){
                pos=i;
                flag=1;
                break;
            }
            else{
                XOR=0;
            }
        }
        if(flag==1){
            cout<<pos<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }


}

