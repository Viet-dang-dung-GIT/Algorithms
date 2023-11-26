#include <bits/stdc++.h>
#define ll = long long int;
using namespace std;

void fillNumber(vector<int> v, int n, vector<int> odd,vector<int> even)
{
    for(int i=0; i<n; i++){
      if(v[i] % 2 == 0){
        even.push_back(i+1);
      }
      else{
        odd.push_back(i+1);
      }
    }
    if(odd.size() >= 1 && even.size() >= 2){
      cout << "YES\n";
      cout << odd[0] << " " << even[0] << " " << even[1] << "\n";
    }
    else if(odd.size() >= 3){
      cout << "YES\n";
      cout << odd[0] << " " << odd[1] << " " << odd[2] << "\n";
    }
    else{
      cout << "NO\n";
    }
    
}

void solve(){
  int n ;
  cin >> n;
  vector<int> v(n);
  vector<int> even;
  vector<int> odd;
  vector<int>::iterator it;

  for(int &x:v){
    cin >> x;
  }
  fillNumber(v, n,odd,even);
}
int main(){
  ios::sync_with_stdio(true);
  cin.tie(0); cout.tie(0);
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}