#include<bits/stdc++.h>
using namespace std;
int del(int arr[],int n,int x)
{
    int i;
    for( i=0;i<n;i++)
    {
        if(arr[i]==x)
            break;
    }
    if(i==n)
        return n;
    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];
    }
    return n-1;
}
int main()
{
    int arr[]={2,5,7,8,9};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int ans=del(arr,5,7);
    for(int i=0;i<ans;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}