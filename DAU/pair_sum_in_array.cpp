#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
   cin >> n;
  vector<int> pair_sum(n);
  for(int &x :pair_sum) cin >> x;
  int target; 
  cin >> target;
  sort(pair_sum.begin(), pair_sum.end());
  int left = 0, right = n -1 ;
  while(left < right){
    if(pair_sum[left] + pair_sum[right] == target){
      cout << "Pair found (" << pair_sum[left] << "," << pair_sum[right] << ")" ;
      return;
    }
    (pair_sum[left] + pair_sum[right] < target) ? left++ : right--;
  }
    cout << "Pair not found";
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t =1;
  while (t--)
  {
    solve();
  }
  return 0;
}