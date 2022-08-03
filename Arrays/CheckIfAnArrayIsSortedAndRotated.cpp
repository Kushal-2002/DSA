// Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, then rotated.
// A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation
// Input:
// N = 4
// arr[] = {3,4,1,2}
// Output: Yes
// Explanation: The array is sorted
// (1, 2, 3, 4) and rotated twice
// (3, 4, 1, 2).
#include <bits/stdc++.h>
using namespace std;
bool checkSortedAndRotated(int arr[], int n)
{
    // Ascending order
    //  Check if all the elements before and after the minimum element are increasing order.
    //  First element should be greater than the last element.
    int minm = INT_MAX, mini = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minm)
        {
            minm = arr[i];
            mini = i;
        }
    }
    if (arr[0] > arr[n - 1])
    {

        for (int i = 0; i < mini - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                return false;
        }
        for (int i = mini; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
                return false;
        }
        return true;
    }
    // Descending order //30 20 10 50 35 -->  50 35 30 20 10
    // Check if all the elements before and after the minimum element are decreasing order.
    // First element should be lesser than the last element.
    else
    {

        for (int i = 0; i < mini; i++)
        {
            if (arr[i] < arr[i + 1])
                return false;
        }
        for (int i = mini + 1; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
                return false;
        }

        return true;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << checkSortedAndRotated(arr, n) << endl;
    return 0;
}
