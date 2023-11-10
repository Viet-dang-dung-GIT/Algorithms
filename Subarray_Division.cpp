#include <bits/stdc++.h>
using namespace std;
int subarray_div(vector<int> sub_div, int n, int day, int month){
  int count = 0;
  for(int i=0; i < n - month + 1; i++){
    int _birthday = 0;
      for(int j=0; j< month; j++){
          _birthday += sub_div[i + j];
      }
      if(_birthday == day){
        count++;
      }
  }
  return count;
}
void solve()
{
  int n; 
  cin >> n;
  vector<int> sub_div(n);
  for(int &x : sub_div) {cin >> x;}
  int day, month;
  cin >> day >> month;
  cout << subarray_div(sub_div,n, day, month);
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