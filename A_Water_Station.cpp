#include<bits/stdc++.h>
//#define int long long int
#define endl '\n'
#define test  int tc; cin>>tc; while(tc--)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

 using namespace std;

signed main()
{
    int t=5;
    int n;cin >> n;

    if(n==100)
    cout << n <<endl;

    else 
    cout << int(round(n/5.0)*t)<< endl;
}