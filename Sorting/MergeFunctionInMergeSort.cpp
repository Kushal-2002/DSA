#include<bits/stdc++.h>
using namespace std;
void mergeHelper(int a[],int b[],int m,int n,int c[],int low)
{
    int i=0,j=0,k=low;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            
            j++;
            k++;
        }
    }
    while(i<m)
    {
        // cout<<a[i]<<" ";
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n)
    {
        // cout<<b[j]<<" ";
        c[k]=b[j];
        k++;
        j++;
    }
}
void merge(int a[],int low,int mid,int high)
{
    int n1=mid-low+1,n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=a[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=a[mid+i+1];
    }
    mergeHelper(left,right,n1,n2,a,low);
}
int main()
{
    int m,n;
    int high,low,mid;
    cin>>n;
    cin>>low>>mid>>high;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge(arr,low,mid,high);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
} 