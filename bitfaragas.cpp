#include<bits/stdc++.h>
using namespace std;int main(){string t;cin>>t;for(char&i:t)i|=32;int n,e;cout<<(t==string(t.rbegin(),t.rend()))<<'\n';set<int>s;for(cin>>n;n--;)cin>>e,s.insert(e);for(int i:s)cout<<i<<";";}
