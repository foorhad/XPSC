#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define fs string::npos //find string in string
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;


int main()
{
 fast();
    int t;cin>>t;
    while(t--){
        ll n,q;cin>>n>>q;
        map<int,set<int>>mp;
        for(ll i=0;i<n;i++){
            int x;cin>>x;
            mp[x].insert(i);
        }
        while(q--){
            ll a,b;cin>>a>>b;
            if((mp.find(a)==mp.end()) || (mp.find(b)==mp.end()))no
            else if(*mp[a].begin() < *mp[b].rbegin()) yes
            else no
        }
    }
    return 0;
}