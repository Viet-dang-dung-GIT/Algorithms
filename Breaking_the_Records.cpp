#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n; 
  cin >> n;
  vector<int> score(n);
  for(int &x : score) cin >> x;

  int _highscore = 0, _lowscore = 0; 
  int _max = score[0], _min = score[0];
  for(int i = 0; i < n; i++){
    
    if(score[i] > _max){
      _highscore ++;
      _max = score[i];
    }
    if(score[i] < _min){
      _lowscore ++; 
      _min = score[i];
    }
  }
  cout << _highscore << " " << _lowscore;

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