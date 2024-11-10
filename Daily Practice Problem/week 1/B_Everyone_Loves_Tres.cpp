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
        ll a = pow(10,n-1);
        ll x = a;
        ll y = pow(10,n);
        while(1){
            if(x%33==0 && x%66==0){
                cout<<x<<nl;
                break;
            }
            x++;
            if(x>=y){
                cout<<-1<<nl;
                break;
            }
        }
    }
    return 0;
}