#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
        long long int n, c=0, c1=0, sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            sum+=abs(a[i]);
        }
        for(int i=0; i<n; i++){
            if(a[i]<0){
                c=1;
            }

            else if(a[i]>0){
                c1+=c;
                c=0;
            }
        }
        cout<<sum<<" "<<c1+c<<endl;
	}

}

