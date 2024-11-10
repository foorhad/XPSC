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
    vector<int> v;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // for(int i : v)cout<<i<<" ";
    // auto it = v.begin();
    // cout << *it << nl;

    // reverse(v.begin(), v.end());
    // sort(v.rbegin(),v.rend());

    // find maximum & minimum element
    cout << "Max elemnent: " << *max_element(v.begin(), v.end()) << nl;
    cout << "Min elemnent: " << *min_element(v.begin(), v.end()) << nl;

    // find maximum & minimum element position
    auto mx = max_element(v.begin(), v.end());
    int posOFmaxelement = mx - v.begin();
    cout << "Max element Pos: " << posOFmaxelement << nl;
    cout << "Min element Pos: " <<min_element(v.begin(), v.end())-v.begin()<< nl;


    // v.insert(v.begin()+1,200);
    // v.erase(v.begin()+2,v.end());
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    

    return 0;
}