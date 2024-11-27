#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    if(x>(y*z)){
        cout<<x-(y*z)<<endl;
    }else{
        cout<<"-1"<<endl;
    }
    return 0;
}