#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n, pos, pos1, flag=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0, j=n-1; i<n; i++, j--){
            //cout<<i<<j<<endl;
            //cout<<n<<endl;
            if(s[i]=='0' && s[j]=='1'){
                n--;
            }
            else if(s[i]=='1' && s[j]=='0'){
                n--;

            }
            else{
                pos=i;
                pos1=n;
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<pos1-pos<<endl;
        }
        else{
            cout<<0<<endl;
        }
	}

}

