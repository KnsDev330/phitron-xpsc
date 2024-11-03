#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n, k;
   cin >> n >> k;

   int x;
   while(n--) {
      cin >> x;
      if(x != k) cout << x << " ";
   }

   return 0;
}