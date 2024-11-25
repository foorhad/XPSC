//problem link : https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
const long long int INF = 1e18 + 5;
const int N = 1e6 + 5;
#define fs string::npos // find string in string
#define mem0(X) memset(X, 0, sizeof(X))
#define mem1(X) memset(X, 1, sizeof(X))
#define memMin1(X) memset(X, -1, sizeof(X))
using namespace std;

int main()
{
    fast();
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)cin >> v[i];
    sort(all(v));
    int cnt_day, j=1;
    for (int i = 1; i <= n; i++)
    {
       if(v[i]>=j){
            cnt_day=j;
            j++;
       }
    }
    cout << cnt_day << nl;
    return 0;
}