#include <bits/stdc++.h>
using namespace std;



void solve(){
  vector<long long int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67,
 71, 73, 79, 83, 89, 97 ,101, 103, 107, 109,
  113, 127, 131, 137, 139, 149, 151, 157 ,163, 167, 173};
  unsigned long long int n; 
  cin >> n;
  unsigned long long int mul = 1 ;
  int count = 0 ;

  for(int i =  0; i < prime.size(); i++){
      mul *= prime[i] ;
     
      if( mul <= n){
        count++;
      }
      else{
        break;
      }
  }
 
  cout << count << endl;
  
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