#include<bits/stdc++.h>
using namespace std;
int transitionPoint(int arr[],int n)
{
    int low=0,high=n-1;
    if(arr[low]==arr[high])
        return -1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]!=arr[mid-1])
            return mid;
        if(arr[mid]==1)
            high=mid-1;
        else
            low=mid+1;

    }
    return -1;
}

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<transitionPoint(arr,n)<<endl;
    return 0;
}