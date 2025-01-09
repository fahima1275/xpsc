#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        if(is_sorted(a, a+n)){
            cout<<0<<endl;
        }
        else{
            int c=0, c1=1;
            for(int i=0; i<n; i++){
                if(a[i]==c1){
                    c1++;
                    c++;
                }
            }
            if((n-c)%k==0){
                cout<<(n-c)/k<<endl;
            }
            else{
                cout<<((n-c)/k)+1<<endl;
            }
        }

    }
}
