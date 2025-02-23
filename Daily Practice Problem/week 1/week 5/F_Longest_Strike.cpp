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
    int n,k;cin>>n>>k;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        mp[x]++;
    }
   
    vector<int>v;
    for(auto [x,y] : mp){
       if(y>=k)v.push_back(x);
    }
    // if(v.empty())cout<<-1<<nl;
    // else {
    //     map<ll,pi>mp1;
    //     ll x,y;
    //     x=v[0];
    //     for(int i=1;i<v.size();i++){
    //         if(v[i]-v[i-1]==1){
    //             y=v[i];
    //             if(i==v.size()-1){
    //                 mp1[y-x] = {x,y};
    //             }
    //         }
    //         else{
    //             y = v[i-1];
    //             mp1[y-x] = {x,y};
    //             x=v[i],y=v[i];
    //             if(i==v.size()-1){
    //                 mp1[y-x] = {x,y};
    //             }
    //         }
    //     }  
    // cout<<mp1.rbegin()->second.first<<" "<<mp1.rbegin()->second.second<<nl;
    // }

    if(v.empty()) {
    cout << -1 << nl;
} else {
    map<ll,pi>mp1;
    ll x = v[0], y = v[0];

    for(int i=1; i<v.size(); i++) {
        if(v[i]-v[i-1]==1) {
            y = v[i];
            if(i == v.size()-1) {
                mp1[y-x] = {x,y};
            }
        } else {
            y = v[i-1];
            mp1[y-x] = {x,y};
            x = v[i], y = v[i];
            if(i == v.size()-1) {
                mp1[y-x] = {x,y};
            }
        }
    }

    if(mp1.empty()) cout << -1 << nl;
    else cout << mp1.rbegin()->second.first << " " << mp1.rbegin()->second.second << nl;
}

  
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}