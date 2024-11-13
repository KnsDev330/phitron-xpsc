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
void inv(vector<int> &v) {
   for(int ixy = 0; ixy < v.size(); ixy++)
      cin >> v[ixy];
}
void pvc(vector<int> &v) {
   for(int x : v)
      cout << x << " ";
}


int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   ll m, n;
   cin >> m >> n;

   priority_queue<int, vector<int>, greater<int>> a, b;

   int xx;
   for(size_t i = 0; i < m; i++) {
      cin >> xx;
      a.push(xx);
   }

   for(size_t i = 0; i < n; i++) {
      cin >> xx;
      b.push(xx);
   }

   ll pairs = 0;

   while(a.size() && b.size()) {
      if(a.top() == b.top()) {
         ll x  = a.top();
         ll ac = 0;
         ll bc = 0;

         while(a.size() && a.top() == x) {
            ac++;
            a.pop();
         }

         while(b.size() && b.top() == x) {
            bc++;
            b.pop();
         }

         pairs += ac * bc;
      }
      else if(a.top() < b.top()) {
         while(a.size() && b.size() && a.top() < b.top()) {
            a.pop();
         }
      }
      else {
         while(b.size() && a.size() && b.top() < a.top()) {
            b.pop();
         }
      }
   }

   cout << pairs;

   return 0;
}