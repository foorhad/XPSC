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
    ll n,sum=0,ans=0,s;cin>>n>>s;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    int begin=0,end=0;
    while(end<n){
        sum+=v[end];
        if(sum<=s){
            ans += end-begin+1;
        }
        else{
            while(sum>s){
                sum-=v[begin];
                begin++;
            }
            ans+=end-begin+1;
        }
        end++;
    }
    cout<<ans<<nl;
  
}
  
  
int main()
{
fast();
    // int t=1;cin>>t;
    // while(t--)solve();
    solve();
    return 0;
}