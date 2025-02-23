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
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;
  
  
void solve(){
    // float x,y;cin>>x>>y;
    // if(y >= x/2)cout<<"NEWBIE"<<nl;
    // else cout<<"PRO"<<nl;
    int n;cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    // for(auto [x,y]:mp)cout<<x<<" "<<y<<nl;
    cout<<mp.rbegin()->first<<" "<<mp.rbegin()->second<<nl;

  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}