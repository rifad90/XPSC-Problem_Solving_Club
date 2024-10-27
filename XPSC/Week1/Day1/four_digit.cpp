#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l= s.length();
    if(l==4){
        cout<<s<<endl;
    }else{
        for(int i=0;i<(4-l);i++){
            s= '0'+s;
        }
        cout<<s<<endl;
    }
     return 0;
}