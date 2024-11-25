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
        ll n,x;cin>>n>>x;
        vector<ll>a(n),b(n),diff;
        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];
        for(ll i=0;i<n;i++){
            diff.push_back(a[i]-b[i]);
        }
        sort(allr(diff));
        for(int i=0;i<n;i++){
            if(x<=0)break;
            if(diff[i]<=0){
                if(diff[i]==0){
                    x--;diff[i]=1;
                }
                else{
                    x -= min(x,abs(diff[i]));
                    if(x>0){
                        x--;diff[i]=1;
                    }
                }
            }  
        }
        int ans = 0;
        for(auto it:diff){
            if(it>0)ans++;
        }
        if(ans > n/2)yes
        else no

    }
    
    return 0;
}