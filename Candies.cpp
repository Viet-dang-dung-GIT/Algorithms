#include <bits/stdc++.h>
using namespace std;
int candies(int n, std::vector<int> arr) {
    vector<int> can(n,1);
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[i - 1]) {
            can[i] = can[i - 1] + 1;
        }
    }

   
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] < arr[i - 1] && can[i] >= can[i - 1]) {
            can[i - 1] = can[i] + 1;
        }
    }

   
    long long int totalCandies = 0;
    for (int i : can) {
        totalCandies += i;
    }

    return totalCandies;
}
void solve()
{
  int n ;
     cin >> n ;
     vector<int> arr(n) ;
     for(int &x : arr){ cin >> x;}
    cout << candies(n, arr);
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
