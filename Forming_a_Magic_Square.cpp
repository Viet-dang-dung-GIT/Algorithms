#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3]={0};
    int arr1[9] = {8, 3, 4, 1, 5, 9, 6, 7, 2};
    int arr2[9] = {6, 1, 8, 7, 5, 3, 2, 9, 4};
    int arr3[9] = {2, 7, 6, 9, 5, 1, 4, 3, 8};
    int arr4[9] = {4, 9, 2, 3, 5, 7, 8, 1, 6};
    int arr5[9] = {6, 7, 2, 1, 5, 9, 8, 3, 4};
    int arr6[9] = {2, 9, 4, 7, 5, 3, 6, 1, 8};
    int arr7[9] = {8, 1, 6, 3, 5, 7, 4, 9, 2};
    int arr8[9] = {4, 3, 8, 9, 5, 1, 2, 7, 6};
    int count[8];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int arrTemp[9]={0};
    int m = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arrTemp[m] = arr[i][j];
            m++;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        count[0] += abs(arrTemp[i] - arr1[i]);
        count[1]   += abs(arrTemp[i] - arr2[i]);
        count[2] += abs(arrTemp[i] - arr3[i]);
        count[3] += abs(arrTemp[i] - arr4[i]);
        count[4] += abs(arrTemp[i] - arr5[i]);
        count[5] += abs(arrTemp[i] - arr6[i]);
        count[6] += abs(arrTemp[i] - arr7[i]);
        count[7] += abs(arrTemp[i] - arr8[i]);
    }
    int ans = *min_element(count, count+8);
    cout << ans;
    return 0;
}
