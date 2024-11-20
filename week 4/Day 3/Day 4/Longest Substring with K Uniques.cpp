//geeksforgeeks
//problem link : https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int begin=0,end=0, ans = -1;
        map<char,int>cnt;
        while(end < s.size()){
            cnt[s[end]]++;
            if(cnt.size()==k){
                ans = max(ans, end-begin+1);
            }
            else{
                while(cnt.size()>k){
                    cnt[s[begin]]--;
                    if(cnt[s[begin]]==0){
                        cnt.erase(s[begin]);
                    }
                    begin++;
                }
            }
            end++;
        }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends
