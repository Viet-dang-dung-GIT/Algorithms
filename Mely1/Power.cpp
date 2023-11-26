#include <bits/stdc++.h>
#define ll = long long int;
using namespace std;

void finalPower(vector<int> skill, int n, vector<int> power,map<int,int> result)
{

}

void solve(){
  int n ;
  cin >> n;
  vector<int> skill(n);
  vector<int> power(n);
  for(int &x  : skill) cin >> x;
  for(int &y : power) cin >> y;
  map<int,int> result ;
  map<int,int>::iterator it;
  unordered_map<int,int> a;
  unordered_map<int,int>:: iterator it2;
  for(int i = 0; i < n ; i++){
   
    a.insert(skill[i],power[i]);
  }
  for(it2 = a.begin(); it2 != a.end();it2++){
    cout << it2->first << " " << it2->second << endl;
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