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
    // tuple<string, int, string, string> std1;
    // std1 = {"Forhad", 12, "018121", "1840650"};
    // cout << get<0>(std1) << " " << get<1>(std1) << " " << get<2>(std1) << " " << get<3>(std1) << nl;

    int n;cin>>n;
    tuple<string, int, string, string> t[n];
    for(int i=0;i<n;i++){
        // cin>>get<0>(t)[i]>>get<1>(t)[i]>>get<2>(t)[i]>>get<3>(t)[i];
        string name; int roll; string reg, phone;
        cin>>name>>roll>>reg>>phone;
        t[i] = {name,roll,reg,phone};
    }
    for(auto [a,b,c,d] : t){
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<nl;
    }

    return 0;
}