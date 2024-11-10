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
    int a,b,t;cin>>a>>b>>t;
    // vector<pair<int,int>>v(21);
    // for(int i=1;i<=20;i++){
    //     v[i-1] = {a*i,b*i};
    // }
    // int ans =0;
    // for(int i=0;i<20-1;i++){
    //     if((t) >= v[i].first && (t) <=v[i+1].first){
    //         ans=v[i].second;
    //         break;
    //     }
    // }
    // cout<<ans<<nl;
    cout<<(t/a)*b<<nl;
    // int cnt = 0;
    // for(int i=1;i<=20;i++){
    //     if(i*a <= t){
    //         cnt+=b;
    //     }
    // }
    // cout<<cnt<<nl;
    

    return 0;
}