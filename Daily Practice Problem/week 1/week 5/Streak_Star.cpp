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
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    int ans = 0;
    for(int i=0;i<n;i++){
        int save = v[i],  cnt=1;
        v[i]*=x;
        for(int j=1;j<n;j++){
            if(v[j] >= v[j-1])cnt++;
            else {
                ans = max(ans,cnt);
                cnt=1;
            }
        }
        ans = max(ans,cnt);
        v[i] = save;
    }
    cout<<ans<<nl;
   
   
}
  
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}