#include <bits/stdc++.h>

using namespace std;

/**
 * @brief 
 * 
 * DIV Mod
 * (a+b)% n = (a%n+ b%n)%n
 * (a*b)%n = (a%n * b%n)%n
 *  (3 - (n % 3) % 3) * 5
 */


void solve(){
  int n ; 
  cin >> n; 
  int div = ((3-(n%3))% 3) * 5;
  if(div > n){
    cout << -1 ;
  }
  else{
    cout << string(n-div,'5') << string(div,'3');
  }
  cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0) ;
    int t; 
    cin >> t;
    while (t--)
    {
      /* code */
      solve();
    }
    

    return 0;
}
