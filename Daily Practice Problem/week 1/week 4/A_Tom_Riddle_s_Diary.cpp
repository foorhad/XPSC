#include <iostream>     // Input/output streams (cin, cout, cerr, etc.)
#include <fstream>      // File streams (for file input/output)
#include <iomanip>      // Input/output manipulators (for formatting)
#include <string>       // String manipulation
#include <sstream>       // StringStream
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
    int n;cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(mp[s]==0)cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
        mp[s]++;
    }
    return 0;
}
