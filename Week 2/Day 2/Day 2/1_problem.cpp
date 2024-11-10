#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
using namespace std;


int main()
{
 fast();
    int n,m;cin>>n>>m;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<int>v(n+1);
    set<int>s;
    for(int i=n;i>0;i--){
        s.insert(a[i]);
        v[i] = s.size();
    }
    while (m--)
    {
        int num;cin>>num;
        cout<<v[num]<<nl;
    }
    

    return 0;
}