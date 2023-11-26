#include <bits/stdc++.h>
using namespace std;
vector<int> P_Triangle( vector<int> sticks ){
  sort( sticks.begin(), sticks.end());
  for( int i = sticks.size() -1 ; i >= 2 ; i-- ){
    if( sticks[i] < sticks[i-1] + sticks[i-2] ){
      return {sticks[i-2], sticks[i-1], sticks[i]};
    }
    
  }
  return {-1};
}
void solve()
{
  int n;
  cin >> n;
  vector<int> sticks(n);
  for (int &x : sticks){ cin >> x;}


 vector<int> a =  P_Triangle(sticks) ;
 for(int &x : a) cout << x << " " ;

}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  while (t--)
  {
    solve();
  }

  return 0;
}
