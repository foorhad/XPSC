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
  
  
void solve(){
    ll n,c;cin>>n>>c;
    vector<ll>v;
    for(ll i=1;i<=n;i++){
      ll x;cin>>x;
      v.push_back(x+i);
    }
    sort(all(v));
    ll cnt=0;
    for(auto val:v){
        if(val <= c){
            cnt++;
            c-=val;
        }
        if(c==0)break;
    }
    cout<<cnt<<nl;
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}