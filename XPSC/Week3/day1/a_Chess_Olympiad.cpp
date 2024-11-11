#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin>>x>>y>>z;
    double point= x*1+y*.5;
    double lost_point= z*1+y*.5;
    int remains= 4-(x+y+z);
    double remains_point=remains;
    if((point+remains_point)>lost_point){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

    return 0;
}