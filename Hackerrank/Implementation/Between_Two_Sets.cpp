#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector<int>& a, vector<int>& b) {
    int boundry = *max_element(b.begin(), b.end());
    int counter = 0;
    for (int i = 1; i <= boundry; i++) {
        // List a has smaller numbers while list b has bigger.
        bool isFactorOfA = true;
        for (int j = 0; j < a.size(); j++) {
            if (i % a[j] != 0) {
                isFactorOfA = false;
                break;
            }
        }
        if (isFactorOfA) {
            bool isFactorOfB = true;
            for (int j = 0; j < b.size(); j++) {
                if (b[j] % i != 0) {
                    isFactorOfB = false;
                    break;
                }
            }
            if (isFactorOfB) {
                counter++;
            }
        }
    }
    return counter;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> a(m), b(n);
    for (int& num : a) {
        cin >> num;
    }
    for (int& num : b) {
        cin >> num;
    }
    int result = getTotalX(a, b);
    cout << result << endl;
    return 0;
}