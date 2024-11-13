#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    int cost=0;
    if(x+y>z){
        cost=2*z+y;
    }else{
        cost=2*x+3*y;
    }
    cout<<cost<<endl;
    
    return 0;
}