#include<bits/stdc++.h>
#define int long long int
#define endl '\n'
#define test  int tc; cin>>tc; while(tc--)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);

 using namespace std;

signed main()
{
 int n;
 cin>>n;
 
 string s1,s2;
 cin >> s1 >> s2;
 
 bool flag = true;
 
 for(int i=0; i<n; i++)
 {
    if(s1[i] != s2[i])
    {
        if((s1[i]=='1' and s2[i]=='l') || (s1[i]=='l' and s2[i]=='1') || (s1[i]=='0' and s2[i]=='o') || (s1[i]=='o' and s2[i]=='0')) 
        continue;
        else
        {
            flag=false;
            break;
        }
    }
 }
 if(flag) 
 cout << "Yes" ;
 
 else cout << "No" ;
}