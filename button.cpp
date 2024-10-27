#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int s=0;
    int i=2;
    while(i!=0){
        if(a>b){
            s+=a;
            a--;
        }else{
            s+=b;
            b--;
        }
        i--;
    }
    cout<<s<<endl;
     return 0;
}