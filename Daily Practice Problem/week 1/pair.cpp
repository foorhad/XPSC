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
    // pair<string,int> std = {"forhad",12};
    // cout<<std.first<<" "<<std.second<<nl;

    // int n;
    // cin >> n;
    // pair<string, int> student[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> student[i].first >> student[i].second;
    // }
    // for (auto [x, y] : student)
    // {
    //     cout << x << " " << y << nl;
    // }

    int n;cin>>n;
    pair<string,pair<int,string>>students[n];
    // students = {"juwel",{12,"018276160.."}};
    for(int i=0;i<n;i++){
        cin>>students[i].first>>students[i].second.first>>students[i].second.second;
    }
    for(auto x : students){
         cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<nl;
    }
   

    return 0;
}