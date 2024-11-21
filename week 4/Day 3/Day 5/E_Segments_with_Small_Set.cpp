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
    int n,k;
    cin >> n >> k;
    map<int,int> mp;
    vector<int> v(n);
    for(auto &it:v)cin>>it;
    ll begin=0,end=0,ans=0;
    while(end<n){
        mp[v[end]]++;
        if(mp.size() <= k){
            ans += end-begin+1;
        }
        else{
            while(mp.size()>k){
                if(mp[v[begin]]==0)break;
                mp[v[begin]]--;
                if( mp[v[begin]]==0)mp.erase(v[begin]);
                begin++;
            }
            if(mp.size() <= k){
                ans += end-begin+1;
            }
        }
        end++;
    }
    cout<<ans<<nl;
}
  
  
int main()
{
fast();
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}