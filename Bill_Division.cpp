#include <bits/stdc++.h>
using namespace std;

void bill_Div(int n, vector<int> bill , int charged , int k) {
  int res ;
  string sumStr = "Bon Appetit";
  
  res = (accumulate( bill.begin(), bill.end(), 0) - bill[k]) / 2;
  if( abs(charged  - res) != 0 ){
    cout << abs(charged-res);
  } 
  else{
    cout << sumStr;
  }
  
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> bill(n);
    for(int &x : bill) cin >> x;
    int charged;
    cin >> charged;
    bill_Div(n,bill,charged,k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}