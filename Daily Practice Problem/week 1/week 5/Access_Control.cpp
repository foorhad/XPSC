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
    string s;cin>>s;
    int flag = 1;
    if(s[0]=='0'){
        no
        return;
    }
    int m=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')m=x;
        else{
            if(m==0){
                no
                return;
            }
            else m--;
        }
    }
    if(flag)yes
    else no
  
}
  
int main()
{
fast();
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}