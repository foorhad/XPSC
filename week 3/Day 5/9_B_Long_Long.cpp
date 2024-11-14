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
    int n;cin>>n;
    ll ans=0;
    vector<ll>v(n);
    for(auto &it:v){
        cin>>it;
        ans+=abs(it);
    }

    ll val=0, l=-1,r=0;
    while(r<n){
        if(v[r]<0){
            l=r;
        }
        if(l!=-1 && v[l]<0 && v[r]>0){
            val++;
            l=r;
        }
        r++;
    }
    if(l!=-1 && v[l]<0)val++;
    cout<<ans<<" "<<val<<nl;

  
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}