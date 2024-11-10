#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, c1=0, mx=0;
	    cin>>n;
	    char c;
	    cin>>c;
	    string s;
	    cin>>s;
	    s+=s;
	    for(int i=0; i<s.size(); i++){
            if(s[i]==c){
                c1=0;
                while(s[i]!='g'&& i<s.size()){
                    c1++;
                    i++;
                }
                if(c1>mx){
                    mx=c1;
                }
            }

	    }
	    cout<<mx<<endl;

    }

}

