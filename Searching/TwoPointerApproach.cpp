#include<bits/stdc++.h>
using namespace std;
//To check if there is a pair with the given sum in the array
bool isPair(int arr[],int n,int x)
{
    int left=0,right=n-1;
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
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>x;
    cout<<isPair(arr,n,x);
    return 0;
}