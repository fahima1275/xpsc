#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int a, b, n, s, s1, s2, a1, a2, s3;
	    cin>>a>>b>>n>>s;
	    s1=a*n;
	    if(s1<s){
            s1+=b;
            if(s1>=s){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
	    }
	    else if(s1==s){
            cout<<"YES"<<endl;
	    }
	    else{
            s2=s1-s;
            if(s2%n!=0){
                s3=s2/n+1;

            }
            else{
                s3=s2/n;
            }
                a2=(a-s3)*n;
                if(a2==s){
                    cout<<"YES"<<endl;
                }
                else if(a2<s){
                    a2+=b;
                    if(a2>=s){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }


	    }
	}

}
