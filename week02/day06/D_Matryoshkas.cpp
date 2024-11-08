#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define inf 2147483647
#define linf 9223372036854775807
using namespace std;
void pyn(bool yes) {
   cout << (yes ? "YES\n" : "NO\n");
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

   int T;
   cin >> T;

   while(T--) {
      int n;
      int c = 0;
      cin >> n;

      int arr[n];
      for(size_t i = 0; i < n; i++)
         cin >> arr[i];

      sort(arr, arr + n);
      vector<vector<int>> a;
      map<int, list<int>> m;

      for(auto num : arr) {
         if(m[num - 1].size() > 0) {
            a[m[num - 1].front()].push_back(num);
            m[num].push_back(m[num - 1].front());
            m[num - 1].pop_front();
         }
         else {
            a.push_back({num});
            m[num].push_back(a.size() - 1);
         }
      }

      cout << a.size() << endl;
   }

   return 0;
}