#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  cin >> a;
  string b;
  cin >> b;
  map<int, int> _map;

  map<int, int>::iterator it;
  for (int i = 0; i < a.size(); i++)
  {
    _map[int(a[i]) - int('a')]++;
  }
  for (int i = 0; i < b.size(); i++)
  {
    _map[int(b[i]) - int('a')]--;
  }

  long long int ans = 0;

  for (it = _map.begin(); it != _map.end(); it++)
  {

    ans += abs(it->second);
  }
  cout << ans << endl;
}