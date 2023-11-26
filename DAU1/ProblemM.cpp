#include<bits/stdc++.h>
using namespace std;

void solve(){
  int a,b,c,d;
  cin >> a >> b >> c >> d ;
  set<int> v;
  for(int i = a ; i <= b; i++){
      for(int j = c ; j <= d; j++){
          v.insert(i^j);
      }
  }
   auto it = v.begin();
  advance(it, (v.size() / 2)-1);
  cout << *it << endl;
  for(int x :v){
    cout << x << " ";
  }
  cout << endl;
}

int main(){
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