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

int sz(char a, char b) {
   if(a == 'S' && b == 'S') return 0;
   if(a == 'S' && b == 'M') return -1;
   if(a == 'S' && b == 'L') return -1;
   if(a == 'M' && b == 'S') return 1;
   if(a == 'M' && b == 'M') return 0;
   if(a == 'M' && b == 'L') return -1;
   if(a == 'L' && b == 'S') return 1;
   if(a == 'L' && b == 'M') return 1;
   if(a == 'L' && b == 'L') return 0;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   int T;
   cin >> T;

   while(T--) {
      string a, b;

      cin >> a >> b;

      char c;
      int cmp = sz(a.back(), b.back());

      if(cmp == -1) c = '<';
      else if(cmp == 1) c = '>';
      else if(cmp == 0 && a.size() == b.size()) c = '=';
      else if(a.back() == 'S') c = a.size() > b.size() ? '<' : '>';
      else c = a.size() > b.size() ? '>' : '<';

      cout << c << endl;
   }

   return 0;
}