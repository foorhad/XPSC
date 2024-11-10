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
        vector<ll>nor(n+1);
        vector<ll>pro(n+1);
        ll ans1=0, ans2=0;
        for(int i=0;i<n;i++){
            cin>>nor[i];
            ans1+=nor[i];
        }
        for(int i=0;i<n;i++){
            cin>>pro[i];
            ans2+=pro[i];
        }
        ll min_cst_using_loop = min(ans1,ans2);

        ll sum = 0;
        ll main_ans = INT_MAX;
        for(int i=n-1;i>=0;i--){
            sum += pro[i];
            for(int j=0;j<n-1;j++){
                sum += nor[j];
            }
            main_ans = min(sum,main_ans);
            sum=0;
        }
        cout<<min(main_ans,min_cst_using_loop)<<nl;
        // cout<<main_ans<<nl;

    }
    
    
    return 0;
}