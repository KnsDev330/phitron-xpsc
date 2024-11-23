//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
   public:
      int longestKSubstr(string &s, int k) {
         int c = 0, n = s.size();
         map<char, int> mp;
         int l = 0, r = 0;

         while(r < n) {
            mp[s[r]]++;

            if(mp.size() == k) {
               c = max(c, r - l + 1);
            }

            if(mp.size() > k) {
               mp[s[l]]--;
               if(mp[s[l]] == 0) {
                  mp.erase(s[l]);
               }
               l++;
            }
            r++;
         }

         return c == 0 ? -1 : c;
      }
};

//{ Driver Code Starts.
int main() {
   int t;
   cin >> t;
   while(t--) {
      string s;
      cin >> s;
      int k;
      cin >> k;
      Solution ob;
      cout << ob.longestKSubstr(s, k) << endl;

      cout << "~"
           << "\n";
   }
}

// } Driver Code Ends