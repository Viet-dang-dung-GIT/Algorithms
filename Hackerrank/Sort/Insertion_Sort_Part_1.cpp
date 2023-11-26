#include<bits/stdc++.h>
using namespace std;

int insertionSort(vector<int> &arr, int n) {
 
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are greater than key,
        to one position ahead of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
       
    }
   
}
void solve(){
  int n ;
  cin >> n ;
  vector<vector<int> > v;
  vector<int> w ; 
  int k ;
  int k1;
  for(int i  = 0; i < n ; i++){
    
      int jj ;
      cin >> jj ;
      
      if( i == n- 1){
        k = jj ;
       k1 = *max_element(w.begin(), w.end()) ;
        w.push_back(k1);
      }
      else{
        w.push_back(jj) ;
      }
      
  }
   insertionSort(w,n);
   v.push_back(w) ;
   for(int i = n - 2; i >=0; i--){
      if( k <= w[i-1] ){
        w[i] = w[i-1];
        v.push_back(w);
      }
      else{
        w[i] = k;
        v.push_back(w);
        break ;
      }
   }
  for(int i = 0 ; i < v.size(); i++){
    for(int j = 0 ; j < n ; j++){
        cout << v[i][j] << " " ;
    }
    cout << endl;
  }


}
int main(){
  ios_base::sync_with_stdio(false);
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}