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
    ll n,m,a,r,c,b,x,y,d,k,z,g,sl,h,type,f;
//    string s,s1,s2,s3;
    map<ll,ll>mp1,day,mp2;
    vector<ll>u,v,w;
    stack<ll>stk;
    queue<ll>qu;
    string s,t;
    cin>>n;
    cin>>s;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='a'|| s[i]=='e')
        {
            ar[i]=1;
        }
        else
        {
            ar[i]=0;
        }
    }
    vector<string>vs;
    t="";
    for(ll i=n-1;i>=0;i--)
    {
        if(ar[i]==1)
        {
            if(i==n-1)
            {
                if(s[i-1]!='*')
                t+=s[i-1];
                t+=s[i];
                s[i]='*';
                s[i-1]='*';
                i--;
            }
            else
            {
                if(s[i-1]!='*')
                t+=s[i-1];
                if(s[i]!='*')
                t+=s[i];
                if(s[i+1]!='*')
                t+=s[i+1];
                s[i]='*';
                s[i-1]='*';
                s[i+1]='*';
            }
            vs.push_back(t);
            t="";
        }
    }
    reverse(vs.begin(),vs.end());
    for(ll i=0;i<vs.size();i++)
    {
        cout<<vs[i];
        if(i<vs.size()-1)
        {
        cout<<".";
        }
    }
    cout<<endl;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
