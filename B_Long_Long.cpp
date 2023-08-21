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
    int tc;    
    cin >> tc; 
    while (tc--)
    {
        int n;cin >> n;
        int count = 0,sum=0;
        vector<int>v(n);
      
        for( int i=0;i<n;i++)
        {
            cin >> v[i];
            sum +=abs(v[i]);
        }
        int l=0, r=n-1;
        bool flag = 0;
        for( int i=0;i<n;i++)
        {
            if(v[i]<0 and !flag)
            {
                l=i;
                flag = 1;
                count++;
            }

            else if(v[i]>0 )
            {
                r = i-1;
                flag = 0;
            }
        }
        
        cout << sum << " " << count << endl;
    }
    }
