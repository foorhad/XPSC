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
    string s;
    int n;
    cin >> n;
    // input string
    while (n--)
    {
        char c;
        cin >> c;
        s.push_back(c);
    }
    cout << s << nl;

    // s.pop_back(); // delete last character
    // cout << s << nl;
    // cout << nl << "Access front & back chacacter" << nl;
    // cout << s.front() << " " << s.back() << nl;

    // cout << s.substr(0, 3) << nl; // access substring

    // sort(all(s));
    // sort(allr(s));
    reverse(all(s));
    cout << s << nl;
    return 0;
}