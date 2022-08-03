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
    for(int j=0;j<n2;j++)
    {
        right[j]=a[mid+j+1];
    }
    cout<<"Merge passed"<<endl;
    mergeHelper(left,right,n1,n2,a,low);
}

void mergeSort(int arr[],int l,int r)
{
    if(r>l)
    {
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int m,n;
    int high,low,mid;
    cout<<"Enter length of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The original array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    mergeSort(arr,0,n-1);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    ;
} 