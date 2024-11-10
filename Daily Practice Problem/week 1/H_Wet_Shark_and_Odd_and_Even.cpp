#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;


int main()
{
 fast();
    int n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // vector<ll>pre(n);
    // pre[0]=v[0];
    // for(int i=1;i<n;i++){
    //     pre[i] = pre[i-1]+v[i]; 
    // }
    // ll ans = 0;
    // for(int i=n-1;i>=0;i--){
    //     if(pre[i]%2==0){
    //         ans = pre[i];
    //         break;
    //     }
    // }
    // cout<<ans<<nl;
    ll ans=0;
    for(int i=0;i<n;i++){
        ll sum = 0;
        for(int j=i;j<n;j++){
            sum +=v[j];
            if(sum%2==0){
                ans = max(ans,sum);
            }
        }
    }
    cout<<ans<<nl;
    return 0;
}