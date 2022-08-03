#include<bits/stdc++.h>
using namespace std;
// Sum of three elements  is equal to the given sum
bool isPair(int arr[],int left,int right,int x)
{
    
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        if(sum==x)
            return true;
        else if(sum>x)
        {
            right--;
        }
        else
            left++;
    }
    return false;
}
//O(n^2)
bool isTriplet(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(isPair(arr,i+1,n-1,x-arr[i]))
            return true;
    }
    return false;
}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    cout<<isTriplet(arr,n,x);
    return 0;
}