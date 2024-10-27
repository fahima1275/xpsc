#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, sum=0, sum1=0;
    cin>>n;
    vector<int>v;
    int a[n];

    for(int i=0; i<n;i++){
        cin>>a[i];
    }



    //sort(a, a+n);
    for(int i=0; i<n;i++){
        if(a[i]%2==0){
            sum=sum+a[i];
        }
        else{
            v.push_back(a[i]);
            sum1=sum1+a[i];
        }
    }
    sort(v.begin(), v.end());
    if(sum1%2!=0){
        sum1=sum1-v[0];
    }
    cout<<sum+sum1<<endl;


}

