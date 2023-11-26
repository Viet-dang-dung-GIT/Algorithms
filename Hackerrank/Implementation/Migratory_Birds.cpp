#include <bits/stdc++.h>
using namespace std;

int Migratory_Birds(int Type[]) {
  int ans = 1;

    for(int i=1; i<= 6; i++){
      if(Type[i] > Type[ans]){
         ans = i;
      }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<int> Type_Birds(n);
    int Type[7];
    memset(Type, 0, sizeof(Type));
    for (int& x : Type_Birds) {
        cin >> x;
        Type[x]++ ;
    }
    cout << Migratory_Birds(Type) << endl;
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