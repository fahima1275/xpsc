#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int>ml;
    int n, problem =1, ans=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        ml.insert(a[i]);
    }
    while(!ml.empty()){
        auto lb=ml.lower_bound(problem);
        if(lb!=ml.end()){
            ans++;
            ml.erase(lb);
        }
        else{
            break;
        }
        problem++;
    }
    cout<<ans<<endl;


}





 
