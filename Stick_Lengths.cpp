//Greedy based approach

#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
int32_t main()
{
    fast;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i < n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int median = v[n/2];
    int ans = 0;

    for(int i=0; i<n ;i++)
    {
        ans +=abs(v[i]-median);

    }
    cout <<  ans << endl;
}