#include <bits/stdc++.h>
using namespace std;


int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n , q ;
  cin >> n ; 
  map<string,int> _map ; 
  map<string,int> :: iterator it ;
  vector<string> dictionary(n) ;
  for(auto &x : dictionary) cin >> x ;
  
  for(int i = 0 ; i < n ; i++){
    sort(dictionary[i].begin(), dictionary[i].end()) ;
    _map[dictionary[i]]++   ;
  }
  cin >> q ;
  vector<string> query(q); 
  for(auto &x : query) cin >> x ; 
  for(int i = 0 ; i < q ; i++){
    sort(query[i].begin(), query[i].end()) ;
  }

 
  for(int i = 0 ; i < q ; i++){
     int flag = 1 ;
      for(it = _map.begin() ; it != _map.end() ; it++){
        if(query[i] == it->first){
          cout << it->second << endl;
          flag = 0 ;
          break ;
        }
      }
      if(flag == 1){
        cout << 0 << endl ;
      }
  }

}