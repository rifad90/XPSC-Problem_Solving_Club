#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h;
    cin>>h;
    int ans=0;
    if(h>=4){
        ans++;
        h-=4;
    }
    if(h>=2){
        ans++;
        h-=2;
    }
    if(h>=1){
        ans++;
        h-=1;
    }
    cout<<ans<<endl;

    return 0;
}