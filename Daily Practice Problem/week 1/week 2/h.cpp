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
        int n;cin>>n;
        bool f=false;
        for(int i=1;i<=100;i++){
            ll ans1;
            ans1 = i*3;
         
            for(int j=1;j<=100;j++){
                ll ans2;
                ans2 = j*7;
                if(ans1==n){
                    f=true;
                    break;
                }
                else if(ans2==n){
                    f=true;
                    break;
                }
                else if((ans1+ans2)==n){
                    f=true;
                    break;
                }
            }
        }
        if(f)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}