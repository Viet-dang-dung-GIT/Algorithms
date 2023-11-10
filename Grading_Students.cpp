#include <bits/stdc++.h>
using namespace std;

int process(int score){
  if(score <= 37){
    return score;
  }
  else if(score < 100 && score % 10 < 5 && score % 10 > 2){
    return score / 10 * 10 + 5;
  }
  else if(score < 100 && score % 10 <= 9 && score % 10 > 7){
    return (score/10 * 10 + 10);
  }
  else{
    return score;
  }
}
void solve()
{
  int n; 
  cin >> n;
  vector<int> grades(n);
  for(int &x : grades) cin >> x;
  for(int i = 0; i < n; i++){
    cout << process(grades[i]) << endl;
  }
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