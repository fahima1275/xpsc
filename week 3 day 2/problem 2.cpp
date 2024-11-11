#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, c=0;
	cin>>n>>m;
	int a[n];
	int b[m];
	for(int i=0; i<n;i++){
        cin>>a[i];
	}
	for(int i=0;i<m; i++){
        cin>>b[i];
	}
	for(int i=0, j=0;j<m; ){
        if(i<n && a[i]<b[j]){
            i++;
            c++;
            //cout<<c<<" ";
        }
        else{
            cout<<c<<" ";
            j++;
        }
	}
	return 0;

}
