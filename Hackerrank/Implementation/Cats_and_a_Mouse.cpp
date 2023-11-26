#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int x, y, z;
  cin >> x >> y >> z;
  
  if(abs(x - z) == abs(y-z)){
    cout << "Mouse C" << endl;
  }
  else if( abs(x - z) < abs(y-z)){
    cout << "Cat A" << endl;
  }
  else{
    cout << "Cat B" << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(true);
  cin.tie(0); cout.tie(0);
  int t ;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}