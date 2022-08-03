#include<bits/stdc++.h>
using namespace std;
//5 20 50 60 70 80
//Peak 80
//Every array has got a peak element which is greater than its neighbours
int getAPeak(int arr[],int n)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>arr[mid+1]) )
            return mid;
        if(mid>0 && arr[mid-1]>=arr[mid])
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
    cout<<getAPeak(arr,n)<<endl;
    return 0;
}