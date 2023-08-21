#include<bits/stdc++.h>
#define ll long long
#define endl as '\n'
using namespace std;



int main()
{
   
    
    ll n,x;
    
    cin>>n>>x;
    
    ll a[n];
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    map<int,int>mp;
    
    ll pos1=-1,pos2=-1;
    
    bool flag=false;
    
    for(int i=0; i<n; i++)
    {
        if(mp.find(x-a[i])!=mp.end())
        {
            pos1=i+1;
            pos2=mp[x-a[i]];
            flag=true;
        }
        
        mp[a[i]]=i+1;
    }
    
    if(flag and pos1!=pos2) cout<<pos1<<" "<<pos2;
    
    else cout<<"IMPOSSIBLE";
}