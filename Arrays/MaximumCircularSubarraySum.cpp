#include<bits/stdc++.h>
using namespace std;
//O(n) efficient solution
int normalMaxSum(int arr[],int n)
{
    int res=arr[0],prevSum=arr[0],sum=0;
    for(int i=1;i<n;i++)
    {
        prevSum=max(prevSum+arr[i],arr[i]);
        res=max(res,prevSum);
    }
    return res;
}
int overallMaxSum(int arr[],int n)
{
    int max_normal=normalMaxSum(arr,n);
    if(max_normal<0)
        return max_normal;
    int arr_sum=0;
    for(int i=0;i<n;i++)
    {
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int max_circular=arr_sum+normalMaxSum(arr,n);
    return max(max_normal,max_circular);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<overallMaxSum(arr,n)<<endl;
    return 0;
}

