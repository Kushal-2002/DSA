//1 2 3 4 5
//O(log n) solution better than Naive O(n)
#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int n,int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
        else 
        {
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;
            else
                high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the number to be searched:\n";
    cin>>x;
    cout<<firstOcc(arr,n,x);
    return 0;
}
