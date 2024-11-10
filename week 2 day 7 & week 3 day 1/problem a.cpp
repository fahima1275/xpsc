#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, z;
	cin>>x>>y>>z;
    float team1=float(0.5*y)+x;
    float team2=float(0.5*y)+z;
   // cout<<team1<<" "<<team2<<endl;
    if(team1>team2){
        cout<<"YES"<<endl;
    }
    else{
        float d=4-(team1+team2);
        //cout<<d<<endl;
        team1=d+team1;
        if(d>team2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
