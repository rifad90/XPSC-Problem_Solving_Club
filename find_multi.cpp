#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int d= b/c;
    int e=d*c;
    if(e<a){
        cout<<"-1"<<endl;
    }else{
        int i=a/c;
        while(true){
            int f=c*i;
            if(f>=a && f<=b){
                cout<<f<<endl;
                break;
            }
            i++;
        }
    }

     return 0;
}