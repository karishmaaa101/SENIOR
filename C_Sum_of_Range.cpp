//Author: Karishmaaa
#include<bits/stdc++.h>
#define int long long int
#define endl '\n'
#define test  int tc; cin>>tc; while(tc--)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

using namespace std;
int sumOdd(int n){
    int t=(n+1)/2;
    return t*t;
}
signed main()
{
    fast;
    int a,b; cin >> a >> b;
    if(a > b)
    swap(a,b);

    int sum1=((b-a+1)*(a+b))/2;
    
    int sum3=sumOdd(b)-sumOdd(a-1);
    int sum2=sum1-sum3;

    cout << sum1<< endl << sum2 << endl << sum3 << endl;


}
