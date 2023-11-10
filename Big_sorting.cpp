#include<bits/stdc++.h>
using namespace std;
vector<string> Big_sort( vector<string> v){
  sort(v.begin(), v.end(),[](string L , string R){
    if(L.size() == R.size()) return L < R ;
    return L.size() < R.size() ;
  });
  return v;
}
void solve(){
  int n ;
  cin >> n ;
  vector<string> v(n) ; 
  for(string &x : v) cin >> x ;

  vector<string> ans =  Big_sort(v) ;
  for(auto &x : ans) cout << x << endl ;
}
int main(){
  ios_base::sync_with_stdio(false);
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}