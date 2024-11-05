#include <bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n, q;
   cin >> n >> q;

   int a[n];

   for(size_t i = 0; i < n; i++) {
      cin >> a[i];
   }

   int x[n];
   set<int> st;

   for(int i = n - 1; i >= 0; i--) {
      st.insert(a[i]);
      x[i] = st.size();
   }

   int l;
   while(q--) {
      cin >> l;
      cout << x[--l] << endl;
   }

   return 0;
}