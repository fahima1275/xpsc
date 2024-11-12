#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	vector<int>v;
	int a[n], b[m];
	for(int i=0; i<n; i++){
        cin>>a[i];
	}
	for(int i=0; i<m; i++){
        cin>>b[i];
	}
	for(int i=0;i<n||i<m; i++){
        if(i<n){
            v.push_back(a[i]);
        }
        if(i<m){
            v.push_back(b[i]);
        }
	}
	sort(v.begin(), v.end());
	for(auto u:v){
        cout<<u<<" ";
	}
	cout<<endl;

}
