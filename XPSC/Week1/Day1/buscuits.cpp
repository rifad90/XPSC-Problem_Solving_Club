#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int d=t/a;
    int s=0;
    if(d>0){
        s=b*d;
    }
    cout<<s<<endl;
     return 0;
}