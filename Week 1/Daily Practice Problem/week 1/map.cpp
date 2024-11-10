#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
const long long int INF = 1e18 + 5;
const int N = 1e6 + 5;
#define mem0(X) memset(X, 0, sizeof(X))
#define mem1(X) memset(X, 1, sizeof(X))
#define memMin1(X) memset(X, -1, sizeof(X))
using namespace std;

int main()
{
    fast();
    map<int, int> mp;
    int n;
    cin >> n;
    // input key and value in map
    while (n--)
    {
        int k, v;
        cin >> k >> v;
        mp[k] = v;
    }
    mp.insert({6,150});
    // output
    for (auto [key, value] : mp)
    {
        cout << key << "->" << value << nl;
    }

    // //find key
    // auto it = mp.find(9);
    // if(it==mp.end())cout<<"value not found"<<nl;
    // else cout<<it->second<<nl;
    cout << nl;
    // erase element

    auto it = mp.find(25);
    if (it != mp.end())
        mp.erase(it);
    else
        cout << "Not available" << nl;

    // output
    for (auto [key, value] : mp)
    {
        cout << key << "->" << value << nl;
    }

    // // size of map
    // cout << mp.size() << nl;

    cout<<nl<<"lower and upper bound"<<nl;
    auto ita = mp.lower_bound(4);
    cout << ita->first << "->" << ita->second << nl;
    auto ita2 = mp.upper_bound(3);
    cout << ita2->first << "->" << ita2->second << nl;

    return 0;
}