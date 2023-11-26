#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  string s;
  cin >> n >> k;
  cin >> s;
  int _countB = 0;
  map<char, int> _map ; 
  for(int i=0; i<s.length(); i++){
    _map[s[i]]++ ;
  }
  for (int i = 0; i < s.length(); i++)
  {
      if(k > 0){
        _map['B']-- ;
        k--;
        _countB++;
        if(_map['B'] == k){
            break ;
        }
      }
      else if(k == 0){
        
      }

  }
  if (k > _countB)
  {
    cout << 1 << endl;
    cout << k - _countB << " B" << endl;
  }
  else if (k == _countB)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << 1 << endl;
    cout << _countB - k << " A" << endl;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}