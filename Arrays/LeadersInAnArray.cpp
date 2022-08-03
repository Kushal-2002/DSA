#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[],int n)
{
    //O(n2)
    // for(int i=0;i<n;i++)
    // {
    //     int flag=0;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[i]<=arr[j])
    //         {
    //             flag=1;
    //             break;
    //         }
    //     }
    //     if(flag==0)
    //         cout<<arr[i]<<" ";
    // }
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if(curr_ldr<arr[i])
        {
            curr_ldr=arr[i];
            cout<<curr_ldr<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leaders(arr,n);
   
    return 0;
}