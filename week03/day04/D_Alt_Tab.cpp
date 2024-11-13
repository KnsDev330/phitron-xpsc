#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
}
void YES() {
   cout << "YES\n";
}
void NO() {
   cout << "NO\n";
}
void ina(int a[], int n) {
   for(int ixy = 0; ixy < n; ixy++)
      cin >> a[ixy];
}
void pvc(vector<int> &v) {
   for(int x : v)
      cout << x << " ";
}


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int n;
   cin >> n;

   map<string, bool> m;
   stack<string> st;
   string s, r = "";

   for(size_t i = 0; i < n; i++) {
      cin >> s;
      st.push(s);
   }

   while(st.size()) {
      if(!m[st.top()]) {
         r += st.top()[st.top().size() - 2];
         r += st.top().back();
      }
      m[st.top()] = true;
      st.pop();
   }

   cout << r;


   return 0;
}