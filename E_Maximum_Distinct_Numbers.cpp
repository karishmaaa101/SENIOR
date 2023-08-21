#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

signed main()
{
    
    int l = 1,r = 2*1e9,ans=1;
    int n;cin >> n;
    n = 2*n;
    while(l<=r){
        int mid = (l+r)/2;
        if(mid*(mid+1)<=n){
            ans = mid;
            l = mid+1;
        }
        else
        r = mid-1;
    }
    cout << ans ;
    return 0;
}