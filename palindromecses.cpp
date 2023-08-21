#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    string str;
    cin>>str;
    map<char,int>mp;
    int odd = 0;

    for(auto it:str)           
    {
        mp[it]++;
    }

    char ch= '*';
    for(auto it :mp)
    {
        if(it.second%2 == 1)            
        {
            odd++;
            ch = it.first;

        }
    }
    if(odd > 1)
    {
    cout<<"NO SOLUTION"<<endl;
    }

    else
    {
        int n = str.length();             
        vector<char>ans(n,'/');
        int i = 0;          
        int j = n-1;
        for(auto it:mp)
        {
            int freq = it.second;
            char c = it.first;

            if(freq%2==0)
            {
                int count=1;
                freq=freq/2;
                while(i<n && count <= freq)
                {
                ans[i] = c;
                i++;
                count++;
            }
            count = 1;
            while(j>=0 && count<=freq)
            {
            ans[j]=c;
            j--;
            count++;
            }
         }
        
    }

for(int i=0;i<n;i++)
{
    if (ans[i] == '/')
    ans[i]=ch;  
}
for(auto it:ans)
cout<<it;
}
    return 0;
}