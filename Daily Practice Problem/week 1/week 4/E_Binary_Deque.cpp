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
    int n,s;cin>>n>>s;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    ll sum =0, ans = INT_MAX, l=1, r=1;
    while(r<=n){
        sum+=v[r];
        if(sum == s){
            ans = min(ans, (n-r)+(l-1)); 
        }
        else{
            while(sum>s){
                sum -= v[l];
                l++;
            }
            if(sum==s){
                ans = min(ans, (n-r)+(l-1)); 
            }
        }
        r++;
    }
    if(ans==INT_MAX)cout<<-1<<nl;
    else cout<<ans<<nl;
}
  
  
int main()
{
fast();
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}