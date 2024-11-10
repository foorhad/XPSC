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
    int n;cin>>n;
    deque<int> dq(n);
    for(int i=0;i<n;i++)cin>>dq[i];
    // dq.push_back(15);
    // dq.push_back(10);
    for (int i : dq)cout << i << " ";
    cout<<nl;
    
    dq.pop_back();
    dq.pop_front();
    dq.push_front(100);
    
    reverse(dq.begin(),dq.end());
    for (int i : dq)cout << i << " ";
    cout<<nl;
    
    // sort(dq.rbegin(),dq.rend());
    sort(allr(dq));
    for (int i : dq)cout << i << " ";

    cout<<nl<<"access front and back element: "<<nl;
    cout<<dq.front()<<" "<<dq.back()<<nl;

    return 0;
}