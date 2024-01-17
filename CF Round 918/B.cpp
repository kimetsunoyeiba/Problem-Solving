#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
vector<vector<ll>>graph;
vector<ll>vis;
/// number of leaf node in a tree
ll dfs(ll x, ll parent)
{
    ll cnt=0;
    for(auto child: graph[x])
    {
        if(child!=parent)
        {
            cnt+=dfs(child,x);
        }
    }
    if(cnt==0 && graph[x].size()==1)
    {
        cnt++;
    }
    vis[x]+=cnt;
    return cnt;
}

void solve()
{
    ll n,m,a,p,q,r,c,b,x,y,d,k,z,g,sl,h;
//    string s,s1,s2,s3;
    map<ll,ll>mp1,day,mp2;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    string s,t;

    char ar[3][3];
    map<char,ll>mp;
    for(ll i=0;i<3;i++)
    {
        for(ll j=0;j<3;j++)
        {
            cin>>ar[i][j];
            mp[ar[i][j]]++;
        }
    }
    for( auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==2)
        {
            cout<<it->first<<endl;
            return;
        }
    }

}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
