#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // queue<int> q;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v[i]=a;
          //  q.push(a);
        }
      //  int s = q.size();
        int sum = 0;
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        // while (!q.empty())
        // {
        //    int a= q.front();
        //    q.pop();
        //    int b= q.front();
        //    q.pop();
        //    if(a!=b) sum++;
        // }
        for(int i=0;i<n;){
            if(v[i] != v[i+1]) sum++;
            i+=2;
        }
        cout<<sum<<endl;
    }

    return 0;
}