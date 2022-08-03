#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int arr1[])
{
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[n-i-1];
    }
    // return 1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverse(arr,n,arr1);
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    
    // cout<<isSorted(arr,n)<<endl;
    return 0;
}