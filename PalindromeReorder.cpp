#include<bits/stdc++.h>
#define endl '\n'
#define int long long int
using namespace std;

int32_t main(){
    string str;cin >> str;
    map<char,int>mp;
    for(auto &x:str)mp[x]++; //inserting elements in the map

    int c=0;char ch='#';

    for(auto &x:mp){
        if(x.second%2 == 1){
            c++;
            ch=x.first;
        }
    }

    if(c>1)cout << "NO SOLUTION\n";
    else
    {
        deque<char>d;
        if(ch!='#'){
            d.push_back(ch);
            mp[ch]--; //removing that one charzcter from the map
        }
        for(auto &x:mp){
            for(int i=0;i<x.second/2;i++){
                d.push_front(x.first);  //inserting even character one front and one back in the created deque
                d.push_back(x.first); 
            }
        }
        for(auto &x:d){ //printint the characters accordingly
            cout << x ;
        }
        cout << endl;
    }
}

