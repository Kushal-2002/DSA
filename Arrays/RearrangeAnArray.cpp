// Given an array arr[] of size N where every element is in the range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]].

// Example 1:

// Input:
// N = 2
// arr[] = {1,0}
// Output: 0 1
// Explanation:
// arr[arr[0]] = arr[1] = 0.
// arr[arr[1]] = arr[0] = 1.

// Example 2:

// Input:
// N = 5
// arr[] = {4,0,2,1,3}
// Output: 3 4 2 0 1
// Explanation:
// arr[arr[0]] = arr[4] = 3.
// arr[arr[1]] = arr[0] = 4.
// and so on.
#include <bits/stdc++.h>
using namespace std;
void arrange(long long arr[], int n)
{
    // First step: Increase all values by (arr[arr[i]]%n)*n
    for (int i = 0; i < n; i++)
    {
        cout<<arr[arr[i]]<<" ";

        arr[i] += (arr[arr[i]]%n) * n;
    }

    // Second Step: Divide all values by n
    for (int i = 0; i < n; i++)
        arr[i] /= n;
}
int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arrange(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}