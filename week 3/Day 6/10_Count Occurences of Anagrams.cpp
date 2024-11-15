//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int stxt= txt.size();
	    int spat= pat.size();
	    vector<int>v(26,0), v1(26,0);
	    for(auto it : pat)v[it-'a']++;
	    
	    int i=0,j=0,ans=0;
	    while(j<stxt){
	        int flag=1;
	        v1[txt[j]-'a']++;
	        if((j-i)+1 == spat){
	            for(int k=0;k<=25;k++){
	                if(v1[k]!=v[k]){
	                    flag=0;
	                    break;
	                }
	            }
	            v1[txt[i]-'a']--;
	            if(flag==1)ans++;
	            i++;
	        }
	        j++;
	    }
	 return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends