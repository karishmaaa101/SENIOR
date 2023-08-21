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

    int n,m;
    cin >> n >>m;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;

    }
    int curr = -m;
    for(auto it:mp){
        if(it.first == curr){
            curr++;
        }
        else
        break;
    }
    cout << curr << endl;
    return 0;
}