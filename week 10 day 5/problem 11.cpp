#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, l, r, ans =0;
        cin>>n>>l>>r;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        for(int i=0; i<n; i++){

            int lb=lower_bound(a.begin()+i+1, a.end(), l-a[i])-a.begin();
            int ub=upper_bound(a.begin()+i+1, a.end(), r-a[i])-a.begin();
            ans+=(ub-lb);
        }
        cout<<ans<<endl;
    }
}
