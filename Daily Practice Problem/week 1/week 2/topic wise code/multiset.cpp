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
    int n;
    cin >> n;

    /*characteristics of set
    1.sorted in assending order */

    multiset<int>ms;
    for (int i = 0; i < n; i++)
    {
        int x;cin >> x;
        ms.insert(x);
    }


    //delete all value
    // if(ms.count(2))ms.erase(2);
    int v;cin>>v;
    // auto it = ms.upper_bound(v);
    auto it = ms.lower_bound(v);
    if(it != ms.end())ms.erase(it);
    else cout<<"end"<<nl;

    /* **Ranged based loop in set** */
    for(auto value : ms)cout<<value<<" ";
    return 0;
}