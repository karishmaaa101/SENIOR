#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


bool isPrime(int x)
{
    for(int i=2;i*i<=x;i++)
    if(x%i==0) return false;
    return true;

}

signed main()
{
    fast;
    int x;
    cin >> x;
    
    while(!isPrime(x))
    x++;

    cout << x << endl;
   

}