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
	int i=0, j=0;
	long long int ans=0;
	while(i<n && j<m){
        int curr=a[i], c2=0, c1=0;
        while(i<n && curr==a[i]){
            c1++, i++;
        }
        while(j<m && curr>b[j]){
            j++;
        }
        while(j<m && curr==b[j]){
            c2++, j++;
        }
        ans+=(1LL*c1*c2);
	}
	cout<<ans<<endl;

}
