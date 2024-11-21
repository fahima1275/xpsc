#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int a, b, c, a1,a2;
        cin>>a>>b>>c;
        if(a==1){
            cout<<1<<endl;
        }
        else if(a>1 && b<c){
            a1=a-1;
            a2=(c-b)+(c-1);
            //cout<<a1<<" "<<a2<<endl;
            if(a1<a2){
                cout<<1<<endl;
            }
            else if(a1==a2){
                cout<<3<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else if(a>1 && b>c){
            a1=a-1;
            a2=b-1;
            if(a1<a2){
                cout<<1<<endl;
            }
            else if(a1==a2){
                cout<<3<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
	}
}
