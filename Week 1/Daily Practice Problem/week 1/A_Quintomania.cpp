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
        vector<int>v(n);
        bool f=true;
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n-1;i++){
            if(abs(v[i]-v[i+1]) != 5 && abs(v[i]-v[i+1]) != 7){
                f=false;
            }
        }
        if(f)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }
    return 0;
}