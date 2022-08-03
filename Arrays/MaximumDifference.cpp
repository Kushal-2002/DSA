#include<bits/stdc++.h>
using namespace std;
int maxDiff(int arr[],int n)
{
    int res=arr[1]-arr[0],minValue=arr[0];
    for(int j=1;j<n;j++)
    {
        res=max(res,arr[j]-minValue);
        minValue=min(minValue,arr[j]);
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
    int ans=maxDiff(arr,n);
    cout<<ans<<endl;
   
    return 0;
}