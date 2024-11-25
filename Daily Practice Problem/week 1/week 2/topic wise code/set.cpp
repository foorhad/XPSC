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

int main()
{
  fast();
  int n;
  cin >> n;

  /*characteristics of set
  1.sortd in assending order. (2) unique value */
  set<int> s;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }

  /* **Normal loop in set** */
  // for(auto it = s.begin(); it!=s.end(); it++){
  //     cout<<*it<<" ";
  // }

  /* **Ranged based loop in set** */
  // for(auto x : s)cout<<x<<" ";

  /*delete value in set*/
  // if(s.find(6)!=s.end())cout<<"found"<<nl;
  // if(s.find(6)!=s.end())s.erase(6);

  // if(s.count(9))s.erase(9);

  // auto it = s.lower_bound(7);
  auto it = s.upper_bound(6);
  cout<<*it<<nl;
  /* **Ranged based loop in set** */
  for (auto x : s)
    cout << x << " ";
  return 0;
}