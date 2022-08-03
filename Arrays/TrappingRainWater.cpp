#include<bits/stdc++.h>
using namespace std;
//naive
// int getWater(int arr[],int n)
// {
//     int res=0;
//     for(int i=1;i<n;i++)
//     {
//         int lMax=arr[i];
//         for(int j=0;j<i;j++)
//         {
//             lMax=max(lMax,arr[j]);
//         }
//         int rMax=arr[i];
//         for(int j=i+1;j<n;j++)
//         {
//             rMax=max(rMax,arr[j]);
//         }
//         res+=min(lMax,rMax)-arr[i];
        
//     }
//         return res;
// }
int getWater(int arr[],int n)
{
    int res=0;
    int lMax[n],rMax[n];
    lMax[0]=arr[0];
    for(int i=1;i<n;i++)
        lMax[i]=max(lMax[i-1],arr[i]);
    rMax[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
        rMax[i]=max(rMax[i+1],arr[i]);
    for(int i=1;i<n-1;i++)
        res=res+(min(lMax[i],rMax[i]))-arr[i];
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans =getWater(arr,n);
    cout<<ans;
    return 0;
}