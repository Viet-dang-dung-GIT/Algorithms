#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n , k ;
   cin >> n >> k ;
   vector<vector<int>> contest(n, vector<int>(2)) ; 
   int lucky = 0 ;
   for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < 2 ; j++){
          cin >> contest[i][j] ;
      }
   }
   sort(contest.begin(), contest.end(), [](const vector<int>& a, const vector<int>& b) {
    return a[0] > b[0];
   });
  for(int i = 0 ; i < n ; i++){
    if(contest[i][1] == 0){
      lucky += contest[i][0];
    }
    if(contest[i][1] == 1 && k != 0){
      lucky += contest[i][0] ; 
      k-- ;
    }
    else if(contest[i][1] == 1 && k == 0){
      lucky -= contest[i][0] ;
    }
  }
   
cout << lucky << endl;
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
