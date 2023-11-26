#include <bits/stdc++.h>
using namespace std;
int sockMerchant(vector<int> arr, map<int,int> check){
  for(int &x : arr){
    cin >> x;
    check[x] ++ ;
  }
  int count = 0;
  for( auto x : check ){
    count += x.second / 2;
  }
  return count;
}
void solve()
{
  int n; 
  cin >> n;
  map<int,int> check;
  vector<int> arr(n);
  cout << sockMerchant(arr,check);
}

int main()
{
  ios_base::sync_with_stdio(true);
  cin.tie(0); cout.tie(0);
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}