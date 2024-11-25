#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin >> t;

   while(t--) {
      int n;
      cin >> n;

      if(n % 2 == 1) {
         cout << "NO" << endl;
      }
      else {
         cout << "YES" << endl;
         cout << "AAB";
         while(n -= 2) {
            cout << "AAB";
         }
         cout << endl;
      }
   }
}