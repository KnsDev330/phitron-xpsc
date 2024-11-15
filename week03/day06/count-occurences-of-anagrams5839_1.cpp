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

bool is(int a[], int b[]) {
   bool all0 = true;
   for(size_t i = 0; i < 26; i++) {
      if(a[i] != b[i]) return false;
      if(a[i] != 0) all0 = false;
   }
   return !all0;
}

int search(string pat, string txt) {
   int a[26] = {0};
   int b[26] = {0};

   for(size_t i = 0; i < pat.size(); i++) {
      a[pat[i] - 'a']++;
      b[txt[i] - 'a']++;
   }

   int c      = 0;
   bool isAna = false;
   if(is(a, b)) {
      c++;
      isAna = true;
   }

   for(size_t i = pat.size(); i < txt.size(); i++) {
      int delChar = txt[i - pat.size()];
      int addChar = txt[i];

      if(delChar == addChar && isAna) c++;
      else {
         b[delChar - 'a']--;
         b[addChar - 'a']++;
         if(is(a, b)) {
            c++;
            isAna = true;
         }
         else {
            isAna = false;
         }
      }
   }

   return c;
}

int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);

   string a, b;
   cin >> a >> b;

   cout << search(b, a);

   return 0;
}