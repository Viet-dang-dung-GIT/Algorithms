#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n ; 
   cin >> n;
   vector<vector<char> > v ;

   for(int i = 0; i < n ; i++) {
      vector<char> w; 
      for(int j = 0; j < n ; j++){
        char c ;
        cin >> c ;
        w.push_back(c);
        sort(w.begin(), w.end());
      }
      v.push_back(w);
}
  for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n ; j++){
        if(v[i][j] > v[i+1][j]){
          cout << "NO" << endl;
          return;
        }
    }
  }
  cout <<"YES" << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}