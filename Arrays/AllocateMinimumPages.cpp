#include<bits/stdc++.h>
using namespace std;
bool isFeasible(int arr[],int n,int k,int ans)
{
    int req=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+arr[i]>ans)
        {
            req++;
            sum=arr[i];
        }
        else    
            sum+=arr[i];
    }
    return (req<=k);
}
int minPages(int arr[],int n,int k)
{
    //n->Total books k->Students
    int mx=0,sum=0,res=1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int high=sum,low=mx;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(isFeasible(arr,n,k,mid))
        {
            res=mid;
            high=mid-1;
        }
        else   
            low=mid+1;
    }
    return res;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<minPages(arr,n,k);
    return 0;
}