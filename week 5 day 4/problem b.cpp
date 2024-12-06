#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, XOR=0;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        XOR=XOR^a[i];
	    }
	    int mn=XOR;
	    for(int i=0; i<n;i++){
	        int s=XOR^a[i];
	        mn=min(mn, s);
	    }
	    cout<<mn<<endl;
	}

}
