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
    int n,m;cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    set<int>s;
    vector<int>cnt(n);
    for(int j=n-1;j>=0;j--){
        s.insert(v[j]);
        cnt[j]=s.size();
    }
    for (int i = 0; i < m;i++)
    {
        int l;cin>>l;
        cout<<cnt[l-1]<<nl;
    }
    
    return 0;
}