#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int h,x,y;
        cin>>h>>x>>y;

        int a= max(x,y);

        int count=1;
        h-=a;

        count+= ceil((double)h / x);

        cout<<count<<endl;

    }
    
    return 0;
}