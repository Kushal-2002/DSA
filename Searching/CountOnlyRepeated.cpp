// Given an array arr[] of N positive integers, where elements are consecutive (sorted). Also, there is a single element which is repeating X (any variable) number of times. Now, the task is to find the element which is repeated and number of times it is repeated.
// Note: If there's no repeating element, Return {-1,-1}.


// Example 1:

// Input:
// N = 5
// arr[] = {1,2,3,3,4}
// Output: 3 2
// Explanation: In the given array, 3 is 
// occuring two times.
#include <bits/stdc++.h>
using namespace std;
vector<int> findRepeating(int arr[],int n)
{
    // Since the array is sorted we have to apply binary search somehow
    int high=n-1,low=0;
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=(arr[0]+mid))
            low=mid+1;
        else 
            high=mid;
    }
    return {arr[low],n-(arr[n-1]-arr[0])+1};
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> v=findRepeating(arr,n);
    cout<<v[0]<<" "<<v[1]<<endl;
    return 0;
}
