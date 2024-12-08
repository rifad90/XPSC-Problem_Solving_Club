    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        long long n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
     
        long long l = 0, r = 0, sum = 0, ans = INT_MAX;
        while (r < n)
        {
            sum += v[r];
            if (sum >=s)
            {
                ans = min(ans, r - l + 1);
              //  r++;
             // cout<<l<<" "<<r<<" ";
                sum -= v[l];
                sum -= v[r];
               // cout<<sum<<endl;
                l++;
            }
            else
            {
                r++;
            }
            
        }
        cout << ans << endl;
     
        return 0;
    }