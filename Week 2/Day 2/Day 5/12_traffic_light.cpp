#include <iostream>     // Input/output streams (cin, cout, cerr, etc.)
#include <fstream>      // File streams (for file input/output)
#include <iomanip>      // Input/output manipulators (for formatting)
#include <string>       // String manipulation
#include <vector>       // Dynamic arrays
#include <list>         // Doubly linked list
#include <queue>        // Queue data structure
#include <stack>        // Stack data structure
#include <map>          // Associative array (key-value pairs)
#include <set>          // Set data structure
#include <algorithm>    // Standard algorithms (sorting, searching, etc.)
#include <cmath>        // Mathematical functions
#include <ctime>        // Date and time functions
#include <cstdlib>      // Standard library utilities (includes functions like `rand()` and `exit()`)
#include <cstring>      // C-style string functions
#include <cassert>      // Assertions
#include <utility>
#include <limits.h>
#define ll long long int
#define pi pair<ll, ll>
#define nl '\n'
const ll INF = 1e18+5;
const int N = 1e6+5;
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 
using namespace std;

int main()
{
 fast();
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        char start;cin>>start;
        string s;cin>>s;
        
        if(start=='g'){
            cout<<0<<nl;
            continue;
        }
        s+=s;
        int ans = -1, dis= 0;
        for(int i=2*n-2;i>=0;i--){
            if(s[i] == start){
                ans = max(ans,dis);
            }
            if(s[i]=='g'){
                dis =0;
            }
            dis++;
        }
        cout<<ans<<nl;
    }
    
    return 0;
}