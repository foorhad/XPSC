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

//fn even
//gn odd
int main()
{
 fast();
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>odd;
        vector<int>even;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                if(i%2==0)even.push_back(i);
                else odd.push_back(i);
            }
        }
        if(even.size() > odd.size())cout<<1<<nl;
        else if(even.size() == odd.size())cout<<0<<nl;
        else if(even.size() < odd.size())cout<<-1<<nl;
    }
    
    return 0;
}