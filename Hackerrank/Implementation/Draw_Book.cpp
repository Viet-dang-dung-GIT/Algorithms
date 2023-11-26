#include <bits/stdc++.h>
using namespace std;

int process(int page,int n){
  if (n % 2 == 1) {
        return min(page/2, (n-page)/2);
    }
    return min(page/2, (n-page+1)/2);

}
void solve()
{
  int beginpage, endpage;
  cin >> beginpage >> endpage ;
  int ans = process(endpage,beginpage);
  cout << abs(ans);
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
