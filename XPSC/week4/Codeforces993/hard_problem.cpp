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
        int m,a,b,c;
        cin>>m>>a>>b>>c;

        int cnt=0,remaining=0;
        if(m>a){
            remaining= m-a;
            cnt+=a;
        }else{
            cnt+=m;
            remaining=0;
        }
        if(m>b){
            remaining+= m-b;
            cnt+=b;
        }else{
            cnt+=m;
           // remaining=0;
        }
           // cout<<remaining<<":"<<cnt<<endl;

        if(remaining>0){
            if(c<remaining){
                cnt+=c;
            }else{
                cnt+= remaining;
            }
        } 
        cout<<cnt<<endl;
    }
    
    return 0;
}