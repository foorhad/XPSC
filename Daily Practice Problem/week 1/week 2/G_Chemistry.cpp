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


int main()
{
 fast();
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        map<char,int>mp;
        for(auto c:s)mp[c]++;
        int odd=0;
        for(auto [x,y]:mp){
            if(y%2!=0)odd++;
        }
        //debug  for(auto [x,y]:mp)cout<<x<<" "<<y<<nl;
        if(odd<=k)yes
        else {
            int ans = odd - k;
            if(ans==1)yes
            else no
        }
    }
    return 0;
}