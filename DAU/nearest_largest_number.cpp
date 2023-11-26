#include<bits/stdc++.h>
using namespace std;

void solve(){
  int nearmax = 0;
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> pos;
  for(int &x : v) cin >> x;
  int max = *max_element(v.begin(),v.end());
  for(int x : v){
    if( nearmax < x && max != x){
          nearmax = x ; 
    }
  }
  for(int i = 0 ; i < n ;i++){
      if(nearmax == v[i]){
        pos.push_back(i);
      }
  }
  cout << nearmax << endl;
  for(int x : pos) cout << x << " ";
  
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while(t--){
    solve();
  }
}