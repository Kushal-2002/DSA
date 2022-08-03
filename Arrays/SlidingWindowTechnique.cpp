//arr[]={1,4,20,3,10,5}
//sum=33
//O/P:YES-->{20,3,10}
#include<bits/stdc++.h>
using namespace std;
bool isSubSum(int arr[],int n,int sum)
{
    int curr_sum=arr[0],start=0;
    for(int end=1;end<n;end++)
    {
        //Clean the prev window
        while(curr_sum>sum && start<end)
        {
            curr_sum-=arr[start];
            start++;
        }
        if(curr_sum==sum)
            return true;
        if(end<n)
            curr_sum+=arr[end];
    }
    return curr_sum==sum;
}
int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<isSubSum(arr,n,sum)<<endl;
    return 0;
}


