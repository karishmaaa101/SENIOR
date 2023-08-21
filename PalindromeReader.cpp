#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    string str;
    cin>>str;
    map<char,int>mp;

    for(auto &x:str)
    mp[x]++;
    
    int count = 0;
    char ch = '*';

    for(auto &x:mp)
    {
        if(x.second % 2 == 1){
            count++;
            ch = x.first;

        }
    }
    if (count > 1)
    {
        cout <<" NO SOLUTION\n";
    }
    else
    {
        deque<char>d;
        if(ch !='*')
        {
            d.push_back(ch);
            mp[ch]--;
        }
        for(auto &x : mp)
        {
            for(int i=0;i < x.second/2;i++)
            {
                d.push_front(x.first);
                d.push_back(x.first);
            }
        }
        for(auto &x:d)
        {
        cout << x ;
        }
        cout << endl;
    }

}