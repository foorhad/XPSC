#include <bits/stdc++.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
#define all(X) (X).begin(),(X).end()
#define allr(X) (X).rbegin(),(X).rend()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
const long long int INF = 1e18+5;
const int N = 1e6 + 5;
#define mem0(X) memset(X,0,sizeof(X))
#define mem1(X) memset(X,1,sizeof(X))
#define memMin1(X) memset(X,-1,sizeof(X))
using namespace std;


int main()
{
 fast();
    int n;cin>>n;
    deque<int>dq(n);
    for(int i=0;i<n;i++)cin>>dq[i];
    int sereja=0, dima=0, who=1;
    while (!dq.empty())
    {
        int leftmost = dq.front();
        int rightmost = dq.back();
        int mx = max(leftmost,rightmost);
        if(who%2!=0){
            sereja+=mx;
        }
        else dima+=mx;
        if(leftmost==mx)dq.pop_front();
        else dq.pop_back();
        who++;
    }
    cout<<sereja<<" "<<dima<<nl;
    return 0;
}