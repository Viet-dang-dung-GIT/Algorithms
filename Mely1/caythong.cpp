#include <bits/stdc++.h>
#define ll = long long int;
using namespace std;

void solve(){
  int n;
  cin >> n;
 string arr[n][n] ;
  for(int i=0; i<n; i++){
        
    for(int j=0; j<n; j++){
        if( j  == (n / 2)){
          arr[i][j] = '*';
          if( arr[i-1][j] == '*' ){
            arr[i][j-1] = '*';
            arr[i][j+1] = '*';
          }
        }
        else{
          arr[i][j] = '-';
        }
    }
  }
  for (int i = 0; i < n; i++){
    for(int j = 0; j < n;j++){
      cout << arr[i][j] << " " ;
    }
    cout << endl;
  }
  
  
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