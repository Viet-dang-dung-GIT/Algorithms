#include <bits/stdc++.h>
using namespace std;

string Day_of_Programmer(int n) {
  // Divisible by 400.
  // Divisible by 4 and not divisible by 100.
  // 1918 cách mạng :))
  if(n == 1918){
    return "26.09.1918";
  }
  if( n % 4 == 0 && n < 1918 || (n % 400 == 0 || (n %  4 == 0 && n % 100 != 0))){
    return  "12.09." + to_string(n);
  }
  else{
    return  "13.09." + to_string(n);
  }
}

void solve() {
    int n;
    cin >> n;
    cout << Day_of_Programmer(n);
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