#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n ;
   cin >> n ;
    vector<int> v(n);
    for(int &x :v) cin >> x ;

    sort(v.rbegin(), v.rend());
    long long int sum = 0;
    for(int i = 0; i < n ; i++){
        sum += (v[i] * pow(2,i));
    }
    cout << sum << endl;
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