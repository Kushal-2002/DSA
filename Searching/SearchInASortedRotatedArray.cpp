#include<bits/stdc++.h>
using namespace std;
//10 20 30 40 50 8 9-->array elements x=30
int search(int arr[],int n,int x)
{
    int high=n-1,low=0;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(arr[mid]==x)
            return mid;
        //Left half is sorted
        else if(arr[mid]>arr[low])
        {
            //x might be present in left half
            if(x>=arr[low] && x<arr[mid])
                high=mid-1;
            //x must be present in right half
            else    
                low=mid+1;
        }
        //Right half is sorted
        else
        {
            //x is present in right half
            if(x>arr[mid] && x<=arr[high])
                low=mid+1;
            //x must be present in left half
            else
                high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    cout<<search(arr,n,x);
    return 0;
}