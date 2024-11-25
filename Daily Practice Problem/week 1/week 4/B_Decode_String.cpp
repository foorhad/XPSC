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
    int n;
    cin >> n;
    string s, ans;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (i+2<n and s[i+2]=='0'){
            if(i+3 < n and s[i+3]=='0'){
                int num = s[i]-'0';
                ans.push_back((char)(96+num));
            }
            else{
                int num = ((s[i]-'0')*10 + s[i+1]-'0');
                ans.push_back((char)(96+num));
                i+=2;
            }
        }
        else{
            int num = (s[i]-'0');
            ans.push_back((char)(96+num));
        }
    }

    // cout << ans << nl;
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