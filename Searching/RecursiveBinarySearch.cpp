//1 2 3 4 5
#include <bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int n,int x,int low,int high)
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
    return bSearch(arr,n,x,low,high);
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the number to be searched:\n";
    cin>>x;
    cout<<bSearch(arr,n,x,0,n-1);
    return 0;
}
