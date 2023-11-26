#include <bits/stdc++.h>
using namespace std;
int divisibleSumPairs(int n, int k, vector<int> div_sum_pairs) {
  int result = 0;
  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
          if((div_sum_pairs[i] + div_sum_pairs[j]) % k == 0){
            result++;
          }
    }
  }
  return result;
}
void solve()
{
  int n, k ; 
  cin >> n >> k; 
  vector<int> div_sum_pairs(n);
  for(int &x : div_sum_pairs) cin >> x;
  cout << divisibleSumPairs(n,k,div_sum_pairs) << endl;
}

int main()
{
  ios_base::sync_with_stdio(true);
  cin.tie(0); cout.tie(0);
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}