//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
   public:
      int lenOfLongestSubarr(vector<int>& a, int k) {
         int n       = a.size();
         long long s = 0;
         int c       = INT_MIN;

         map<long long, int> mp;

         for(int i = 0; i < n; i++) {
            s += a[i];
            if(s == k) c = max(c, i + 1);

            int diff = s - k;
            if(mp[diff]) c = max(c, i + 1 - mp[diff]);
            if(!mp[s]) mp[s] = i + 1;
         }

         return c;
      }
};

//{ Driver Code Starts.

int main() {
   /**
    * CUSTOM INPUT FORMAT
    * N K
    * A1 A2 A3 ... AN
    */

   int n;
   int k;

   cin >> n >> k;
   vector<int> arr(n);

   for(size_t i = 0; i < n; i++) {
      cin >> arr[i];
   }

   Solution solution;
   cout << solution.lenOfLongestSubarr(arr, k);

   return 0;
}

// } Driver Code Ends
