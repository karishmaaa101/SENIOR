#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
signed main()
{
    fast;
    int t;cin >>t; while(t--)
    {
        int n;cin >> n;
        int red,blue;
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        red = a[n-1];
        blue = a[0]+a[1];

        if(red>blue){
        cout << "YES" << endl;
        continue;
        }

        int flag = 0;
        int i = 2, j = n-2;
        while(i<j)
        {
            red = red +a[j];
            blue = blue + a[i];
            if(red > blue)
            {
                flag = 1;
                break;
            }
            i++;
            j--;
        }
        if(flag == 1)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }

}