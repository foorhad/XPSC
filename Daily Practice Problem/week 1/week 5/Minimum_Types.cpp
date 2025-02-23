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
    ll n,x;cin>>n>>x;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        v[i] = v[i]*val;
    }
    sort(allr(v));
    int cnt=0;
    while(cnt<n && x>0){
        x-= v[cnt];
        cnt++;
    }
    if(x<=0)cout<<cnt<<nl;
    else cout<<-1<<nl;
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}