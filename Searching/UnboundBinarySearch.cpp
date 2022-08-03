//Search for an element in an infinite sorted arry
#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int x,int low,int high)
{
    if(low>high)
        return -1;
    int mid=(high+low)/2;
    if(arr[mid]==x)
        return mid;
    else if(arr[mid]>x)
        high=mid-1;
    else 
        low=mid+1;
    return bSearch(arr,x,low,high);
}
int search(int arr[],int x)
{
    if(arr[0]==x)
        return 0;
    int i=1;
    while(arr[i]<x)
        i*=2;
    if(arr[i]==x)
        return i;
    return bSearch(arr,x,i/2+1,i-1);
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    cout<<search(arr,x);
    return 0;
}