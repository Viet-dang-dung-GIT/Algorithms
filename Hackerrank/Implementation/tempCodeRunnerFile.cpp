#include <bits/stdc++.h>
using namespace std;

void bill_Div(int n, vector<int> bill , int charged , int k) {
  int sum = 0 ;
  string sumStr = "Bon Appetit";
  sum = accumulate( bill.begin(), bill.end(), sum) ;
  if( charged - (sum - bill[k] / 2) > 0 ){
    cout <<  charged - (sum - bill[k] / 2);
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