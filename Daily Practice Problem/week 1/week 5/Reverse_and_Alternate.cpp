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
    int n;cin>>n;
    string s;cin>>s;
    int zero=0,one=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='0' and s[i+1]=='0')zero++;
        if(s[i]=='1' and s[i+1]=='1')one++;
    }
    // cout<<"zero: "<<zero<<nl;
    // cout<<"one: "<<one<<nl;
    if((zero>=2) or (one>=2))no
    else if(zero==0 and one==0)yes
    else if(zero==1 and one==1)yes
    else if(zero==1){
        if(s[0]=='1' or s[n-1]=='1')yes
        else no
    }
    else if(one==1){
        if(s[0]=='0' or s[n-1]=='0')yes
        else no
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