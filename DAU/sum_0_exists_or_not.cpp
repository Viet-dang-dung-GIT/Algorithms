#include<bits/stdc++.h>
using namespace std;
bool sum_exists(vector<int> v, int n){
  int sum = 0 ;
  set<int> Set;
  Set.insert(sum);
  for(int i = 0; i < v.size();i++){
    sum += v[i];
    if(Set.find(sum) != Set.end()){
      return true;
    }
    Set.insert(sum);
  }
  return false;
} 
void solve(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int &x : v) cin >> x;
  sum_exists(v,n) ? cout << "Subarray exists" : cout << "Subarray not exists" ;

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t =1;
  while(t--){
    solve();
  }
  return 0;
}