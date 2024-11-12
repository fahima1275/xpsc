#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n, k, c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0; i<n;){
            if(s[i]=='B'){
                i=i+k;
                c++;
            }
            else{
                i++;
            }
        }
        cout<<c<<endl;
	}

}

