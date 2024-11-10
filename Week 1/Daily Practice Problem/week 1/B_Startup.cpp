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
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>v;
        while(k--){
            int b,c;cin>>b>>c;
            v.push_back(c);
        }
        sort(allr(v));
        ll ans=0;
        if(n >= v.size()){
            for(auto x : v)ans+=x;
        }
        else if(n<v.size()){
            for(int i=0;i<n;i++){
                ans+=v[i];
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}