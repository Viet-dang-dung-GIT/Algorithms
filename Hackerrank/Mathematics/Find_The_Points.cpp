#include <bits/stdc++.h>
using namespace std;
void FindThePoint(int x, int y , int w, int h){

  /**
   * @brief 
   * 
   * x' = 2 xc - x ;
   * y' = 2 yc - y ; 
   */
    int ans_x = 2 * w - x ; 
    int ans_y = 2 * h - y ; 
    cout << ans_x << " " << ans_y << endl;
}
void solve(){
  int px, py, qx , qy ;
  cin >> px >> py >> qx >> qy;
  FindThePoint(px,py,qx,qy) ;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t ;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}