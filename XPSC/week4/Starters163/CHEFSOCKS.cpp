#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,x,y;
    cin>>a>>x>>y;
    if(a>(x+y)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}