#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
const long long int INF = 1e18 + 5;
const int N = 1e6 + 5;
#define fs string::npos // find string in string
#define mem0(X) memset(X, 0, sizeof(X))
#define mem1(X) memset(X, 1, sizeof(X))
#define memMin1(X) memset(X, -1, sizeof(X))
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &it : a)
        cin >> it;

    vector<string> v;
    for (int i = 0; i < min(n / 2, m / 2); i++)
    {
        string temp;
        for (int j = i; j < m - i; j++)
        {
            temp.push_back(a[i][j]);
        }
        for (int j = i + 1; j < n - i; j++)
        {
            temp.push_back(a[j][m - i - 1]);
        }
        for (int j = m - i - 2; j >= i; j--)
        {
            temp.push_back(a[n - i - 1][j]);
        }
        for (int j = n - i - 2; j > i; j--)
        {
            temp.push_back(a[j][i]);
        }
        v.push_back(temp);
    }
    int ans = 0;
    for(auto x : v){
        x.push_back(x[0]);
        x.push_back(x[1]);
        x.push_back(x[2]);
        int sz = x.size();
        for(int i=0;i<sz-3;i++){
            if(x.substr(i,4)=="1543")ans++;
        }
    }
    cout<<ans<<nl;
}

int main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}