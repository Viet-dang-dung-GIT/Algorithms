#include<bits/stdc++.h>
using namespace std;

void  insertionSort(vector<int> &arr) {
    vector<vector<int> > res;
    int i, key, j;
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        res.push_back(arr) ;
    }
     for(int i = 0; i < arr.size() ; i++){
    for(int j = 0; j < arr.size() ; j++){

        cout << res[i][j] << " " ;
        
    }
    cout << endl;
   }
}

int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n ;
  vector<int> w(n) ; 
  for(int &x : w) cin >> x ;
   
   
    insertionSort(w);
  
  return 0;
}