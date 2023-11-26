#include<bits/stdc++.h>
using namespace std;
int main(){
  int v; 
  cin >> v;
  int n ; 
  cin >> n;
  vector<int> arr(n) ;
  for(int &x : arr) cin >> x ;
  for(int i = 0; i < n;i++){
    if( arr[i] == v){
      cout << i ;
      return 0 ;
    }
  }

  return 0;
}