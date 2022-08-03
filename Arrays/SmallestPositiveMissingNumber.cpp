// You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.
// Example 1:

// Input:
// N = 5
// arr[] = {1,2,3,4,5}
// Output: 6
// Explanation: Smallest positive missing 
// number is 6.
// Example 2:

// Input:
// N = 5
// arr[] = {0,-10,1,3,-20}
// Output: 2
// Explanation: Smallest positive missing 
// number is 2.
#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[],int n)
{
    int check[n+1]={0};
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]<=n)
        {
            check[arr[i]]=1;
        }
    }
    for(int i=1;i<n+1;i++)
        if(check[i]==0)
            return i;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n)<<endl;
    return 0;
}