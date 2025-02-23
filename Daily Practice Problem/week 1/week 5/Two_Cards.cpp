#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define yes cout<<"Yes"<<nl;
#define no cout<<"No"<<nl;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;
  
  
void solve(){
    int n;cin>>n;
    vector<pi>v3;
    vector<ll>v1(n),v2(n);
    for(auto &it : v1)cin>>it;
    for(auto &it : v2)cin>>it;
    
    for(int i=0;i<n;i++){
        v3.push_back({v1[i],v2[i]});
    }
    sort(allr(v3));
    ll alice =max(v3.front().first,v3.front().second); 
    ll bob =max(v3[1].first,v3[1].second); 
    if(alice>bob || bob>alice)yes
    else no

  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}