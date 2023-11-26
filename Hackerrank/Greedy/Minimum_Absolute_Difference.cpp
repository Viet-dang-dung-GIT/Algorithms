#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n ;
   cin >> n ;
   vector<long long int> v(n);
   long long int _min = INT_MAX;
   for(long long int &x : v) cin >> x ;
  sort(v.begin(), v.end());
   for(int i = 0; i < n - 1;i++){
            _min = min(_min,abs(v[i]- v[i+1]));
   }
   cout << _min << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}