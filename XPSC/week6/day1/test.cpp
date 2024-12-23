#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    for (int i = 0; i < (1<<n); i++)
    {
       cout<<i<<"=> ";
       for(int k=n-1;k>=0;k--){
        if((i>>k) & 1){ // num k , k tomo left shift kore 1 diye and kore true asche on bit else off bit
            cout<<"1"<<" ";
        }else{
            cout<<"0"<<" ";
        }
       }
       cout<<endl;
    }
    
    return 0;
}