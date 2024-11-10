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
    while (t--)
    {
        int n;cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        // vector<int>v(n);
        // v[0]=ar[0];
        // for(int i=1;i<n;i++){
        //     v[i] = v[i-1]+ar[i];
        // }
        // int ans=0;
        // for(int i=v.size()-1;i>=0;i--){
        //     if(v[i]%2==0){
        //         ans=i+1;
        //         break;
        //     }
        // }
        // cout<<ans<<nl;
        int indx = 0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum += ar[j];
                if(sum % 2 == 0){
                    indx = max(j-i+1,indx);
                }
            }
        }
        cout<<indx<<nl;
    }
    
    return 0;
}