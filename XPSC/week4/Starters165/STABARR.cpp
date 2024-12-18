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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int count=0;
        // for(int i=0;i<n-1;){
        //     if(v[i]<v[i+1]){
        //         count++;
        //         v[i]=v[i+1];
        //         for(int j=i;j<n-1;j++){
        //             if(v[j]<v[j+1]){
        //                  v[j]=v[j+1];
        //             }
        //         }
        //        i=0;
        //     }else{
        //         i++;
        //     }
        // }
        cout<<count<<endl;
    }
    
    return 0;
}