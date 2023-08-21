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
        int ar,ac,br,bc,cr,cc;
        cin >> ar >> ac >> br >> bc >> cr >> cc;
        vector<int> r = {ar,br,cr};
        vector<int> c ={ac,bc,cc};
        sort(r.begin(),r.end());
        sort(c.begin(),c.end());
        int mid_r =r[1] ;
        int mid_c =c[1] ;
        int output = abs(mid_r- ar) +abs(mid_c-ac) +1;
        cout << output <<endl;
    }
}