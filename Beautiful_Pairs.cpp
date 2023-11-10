#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n ;
     cin >> n ;
     vector<int> a(n) ;
     for(int &x : a) cin >> x ;
     vector<int> b(n) ;
     for(int &x : b) cin >> x ;
    long long int _count = 0 ;
    map<int,int> _map ;
    map<int,int>::iterator it ;
    for(int i = 0; i < n ; i++){
      _map[a[i]]++ ; 
    }
     for(int i = 0; i < n ; i++){
      if(_map[b[i]]){
        _map[b[i]]-- ; 
        _count++ ;
      }
    }
 
   cout << ((_count == n) ? _count -1 : _count + 1);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int t = 1;
  while (t--)
  {
    solve();
  }

  return 0;
}
