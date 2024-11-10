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
    int row;
    cin >> row;
    vector<vector<int>> v;
    for (int i = 0; i < row; i++)
    {
        int x;
        cin >> x;
        vector<int> v1;
        for (int j = 0; j < x; j++)
        {
            int val;
            cin >> val;
            v1.push_back(val);
        }
        v.push_back(v1);
    }

    sort(v[1].begin(), v[1].end());
    v[0].push_back(500);
    v[1].push_back(50);
    v[1].push_back(45);

    for (int i = 0; i < row; i++)
    {
        for (int j : v[i])
            cout << j << " ";
        cout << nl;
    }

    // //string of vector
    // vector<string>vec;
    // int num;cin>>num;
    // for(int i=0;i<num;i++){
    //     string s;cin>>s;
    //     vec.push_back(s);
    // }
    // reverse(vec[0].begin(),vec[0].end());
    // sort(vec[1].begin(),vec[1].end());
    // sort(vec[2].rbegin(),vec[2].rend());
    // for(int i=0;i<num;i++){
    //     for(char c : vec[i]){
    //         cout<<c<<" ";
    //     }
    //     cout<<nl;
    // }

    vector<pair<string,int>>vec1;
    int num1;cin>>num1;
    while (num1--)
    {
        string s;cin>>s;int val;cin>>val;
        vec1.push_back({s,val});
    }
    for(auto [x,y] : vec1){
        cout<<x<<" "<<y<<nl;
    }
    

    return 0;
}