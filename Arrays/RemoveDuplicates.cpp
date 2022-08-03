#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(int arr[],int n)
{
    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k=removeDuplicates(arr,n);
    cout<<k<<endl;
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    
    // cout<<isSorted(arr,n)<<endl;
    return 0;
}