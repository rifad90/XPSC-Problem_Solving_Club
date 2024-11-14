#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }
    // for (int a :ml)
    // {
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    int count = 0, day = 1;
    while (ml.lower_bound(day) != ml.end())
    {
        auto lb = ml.lower_bound(day);
        count++;
        ml.erase(lb);
        day++;
    }
    cout << count << endl;
    return 0;
}