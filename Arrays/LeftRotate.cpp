#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[high],arr[low]);
        low++;
        high--;
    }
}
void leftRotate(int arr[],int n,int d)
{
    //d=d%n if d>=n
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    leftRotate(arr,n,d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}