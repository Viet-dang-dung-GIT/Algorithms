#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
   
    int i, key, j;
    for (i = 1; i < arr.size(); i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        
    }
    for(int i = 0 ; i < arr.size(); i++) {
            cout << arr[i] << " " ;
        }
        cout << endl;
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