#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[],int n)
{
    int res=0,prevSum=0,res=arr[0];
    //7
    // -5 1 -2 3 -1 2 -2
    //

    for(int i=0;i<n;i++)
    {
        prevSum=max(prevSum+arr[i],arr[i]);
        res=max(prevSum,res);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<maxSum(arr,n)<<endl;
    return 0;
}