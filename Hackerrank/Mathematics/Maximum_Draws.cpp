#include <bits/stdc++.h>
using namespace std;
int MaximumDraw(int x){
  return x + 1;
 
}
void solve(){
 int n ;
 cin >> n ;
  cout << MaximumDraw(n) << endl;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t ;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}